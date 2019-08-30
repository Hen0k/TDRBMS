#include<iostream>
#include<vector>
#include<set>
#include<tuple>
#include<map>
#include "datastructure.hpp"




// Abstruct Definitions
int get_table_idx(int dbidx, std::string tbname);
int get_db_idx(std::string dbname);
void create_db(std::string dbname);
void append_row(std::string dbname, std::string tbname, std::string v1, std::string v2);
void add_new_table(std::string dbname, std::string tbname, std::string cname1, std::string cname2);
void show_databases();
void show_tables(std::string dbname);
void show_table(std::string dbname, std::string tbname);
void interface();