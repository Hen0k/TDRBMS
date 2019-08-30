#include "datastructure.h"
#include "parser.h"

int main()
{
    std::cout << "-----------------------------------------------------------" << std::endl;
    std::cout << "Welcome to HRDBMS" << std::endl << std::endl;
    // while (1)
    // {
    //     /* code */
    //     interface();
    // }
    
    
    // Database db;
    std::string dbname = "mydatabase";
    create_db(dbname);
    add_new_table(dbname, "students", "Name", "Profession");
    append_row(dbname, "students", "Henok", "Student");
    append_row(dbname, "students", "Hayle", "Student");
    append_row(dbname, "students", "Teddy", "Student");
    append_row(dbname, "students", "Robel", "Student");
    append_row(dbname, "students", "Debbie", "Student");
    append_row(dbname, "students", "Gere", "Student");
    append_row(dbname, "students", "Blen", "Student");
    append_row(dbname, "students", "Kasim", "Student");

    show_databases();
    show_tables(dbname);
    show_table(dbname, "students");

    // Databases.push_back(db);
    // add_new_table("hayle", "students table", "no", "name");

}
