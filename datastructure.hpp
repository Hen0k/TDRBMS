
typedef std::tuple<std::string, std::string> Row;
typedef std::set<Row> Table;
typedef std::vector<Table> Database;
std::vector<Database> Databases;

typedef std::pair<std::string, std::vector<std::string>> TableMD;
typedef std::pair<std::string, std::vector<TableMD>> DBMD;

std::vector<DBMD> metadata;

// Helper functions
int get_table_idx(int dbidx, std::string tbname)
{
    for (int j=0; j<metadata[dbidx].second.size(); j++)
    {
        if(metadata[dbidx].second[j].first==tbname)
            return j;
    }
}

int get_db_idx(std::string dbname)
{
    for(int i=0; i<metadata.size(); i++)
    {
        if(metadata[i].first==dbname)
            return i;
    }
}


void create_db(std::string dbname)
{
    Database DB;
    Table table;
    DBMD dbmd;
    TableMD tbmd;
    tbmd.first = "Sample Table";
    tbmd.second.push_back("Column1");
    tbmd.second.push_back("Column2");

    dbmd.first = dbname;
    
    dbmd.second.push_back(tbmd);
    // write the metadata
    metadata.push_back(dbmd);

    // create a sample table in the database to finalize the creation
    Row row = {" ", " "};
    table.insert(row);
    DB.push_back(table);
    // Push the created DB into the vector that holds all DBs
    Databases.push_back(DB);

    std::cout << "Database Successfully Created" << std::endl;
}


void append_row(std::string dbname, std::string tbname, std::string v1, std::string v2)
{
    int dbidx, tblidx;

    dbidx = get_db_idx(dbname);
    tblidx = get_table_idx(dbidx, tbname);
    
    Row row = {v1, v2};
    Databases[dbidx][tblidx].insert(row);
    std::cout << "Row Successfully Appended" << std::endl;
}


void add_new_table(std::string dbname, std::string tbname, std::string cname1, std::string cname2)
{
    int dbidx;
    dbidx = get_db_idx(dbname);
    
    // Update the metadata
    TableMD tbmd;
    tbmd.first = tbname;
    tbmd.second.push_back(cname1);
    tbmd.second.push_back(cname2);
    metadata[dbidx].second.push_back(tbmd);
    
    // add the table to the structure
    Row row = {"", ""};
    Table newTable;
    newTable.insert(row);
    Databases[dbidx].push_back(newTable);

    std::cout << "New Table Successfully Created" << std::endl;
}

void show_databases()
{
    std::cout << "Here are all your Databases : " << std::endl;
    for(int i=0; i<metadata.size(); i++)
    {
        std::cout << metadata[i].first << std::endl;
    }

}

void show_tables(std::string dbname)
{
    int dbidx = get_db_idx(dbname);
    std::cout << "Database name : " << metadata[dbidx].first << std::endl;
    std::cout << "Tables : " << std::endl;
    for(int i=0; i<metadata[dbidx].second.size(); i++)
    {
        std::cout << metadata[dbidx].second[i].first << std::endl;
    }
}

void show_table(std::string dbname, std::string tbname)
{
    int dbidx, tblidx;
    dbidx = get_db_idx(dbname);
    tblidx = get_table_idx(dbidx, tbname);
    // DB name
    std::cout << "Database : " << metadata[dbidx].first << std::endl;
    // Table Name
    std::cout << "Table : " << metadata[dbidx].second[tblidx].first << std::endl;
    // Column names
    std::cout << "Table : " << std::endl << std::endl;

    std::cout << "---------------------------------" << std::endl;
    
    std::cout << metadata[dbidx].second[tblidx].second[0];
    std::cout << "\t | \t" << metadata[dbidx].second[tblidx].second[1] << std::endl;

    std::cout << "---------------------------------" << std::endl;

    for (auto i=Databases[dbidx][tblidx].begin(); 
        i!=Databases[dbidx][tblidx].end(); i++)
    {
        std::cout << "|" << std::get<0>(*i) << "\t | \t";
        std::cout << std::get<1>(*i) << std::endl;
    }

}