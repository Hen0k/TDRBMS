
// void interface()
// {
//     bool flag = false;
//     int dbidx, tblidx;
//     std::string command, selectedDB, newDBName = "";
//     std::vector<std::string> spaceSplit;
//     std::vector<std::string> *ptr = &spaceSplit;

//     // std::string spaceSplit[10];
//     std::cout << "-----------------------------------------------------------" << std::endl;
//     std::cout << "Welcome to HRDBMS" << std::endl << std::endl;
    
//     while(1)
//     {
//         // spaceSplit.clear();
//         // BOOST_FOREACH(auto &ele, spaceSplit)
//         // {
//         //     ele.erase();
//         // }
//         // spaceSplit.clear();
//         // std::vector<std::string> spaceSplit;
//         std::cout << "HRDBMS: ";
//         // Get a line with the ';' delimiting char
//         std::getline(std::cin, command, ';');
//         // std::cout << comand << std::endl;
//         // spaceSplit = spaceSplit;
//         // boost::split(spaceSplit, comand, [](char c){return c == ' ';});
//         // spaceSplit.clear();
//         // std::cout <<spaceSplit[0] << std::endl;

//         boost::split(*ptr, command, boost::is_any_of(" "));
//         // std::cout << "Size : " << space_split.size() << std::endl;
//         // std::cout << "Size : " << spaceSplit.size() << std::endl;

//         if(spaceSplit.size()==1 && !spaceSplit[0].compare("exit") )
//         // if(spaceSplit[0]=="exit") 
//         {
//             std::cout << "GoodBye!!!" << std::endl;
//             // break;
//             exit(0);
//         }

//         if(spaceSplit.size()>1 and flag==false)
//         {
//             // if(spaceSplit[0]=="show" && spaceSplit[1]=="databases") show_databases();
//             if(spaceSplit[0]=="use")
//             {
//                 flag = true;
//                 selectedDB = spaceSplit[1];
//                 // dbidx = get_db_idx(selectedDB);
//                 std::cout << selectedDB << "Has been selected" << std::endl;
//             }

//             else if(spaceSplit[0]=="create" && spaceSplit[1]=="database")
//             {
//                 newDBName = spaceSplit[2];
//                 create_db(newDBName);
//                 // DBMD dbmd = 
//             }
                
//         }

//         else if(spaceSplit.size()>1 and flag==true)
//         {
//             if(spaceSplit[0]=="show" && spaceSplit[1]=="databases") show_databases();
//             else if(spaceSplit[0]=="show" && spaceSplit[1]=="tables") show_tables(selectedDB);
//         }
//         std::cout << "Size : " << spaceSplit.size() << std::endl;
//         // std::vector<std::string>().swap(spaceSplit);
//         // spaceSplit = std::vector<std::string>();
//         // delete &spaceSplit;
//         // std::cout << spaceSplit << std::endl;
//         // spaceSplit.clear();
//         ptr->clear();
//         // ptr->operator=;
//         // ptr = &spaceSplit;
//         // delete ptr;
//         // std::cout <<spaceSplit.size() << std::endl;

//     }
//     // exit(0);
// }