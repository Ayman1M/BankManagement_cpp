//
// Created by ayman on 5/19/25.
//

// Path.h

#ifndef PATH_H
#define PATH_H

#include <iostream>
#include <fstream>

namespace Path {



#if _WIN32 || __WIN32__ || _WIN64 || __WIN64__

 const static std::string appName = "Bank_System";

 const static char* base = std::getenv("APPDATA");
 const static std::string basic_folder = std::string(base) + "\\" + appName;

 const string path_format ="\\";

 const static std::string DataBase_path = "Database";
 const static std::string Users_path = DataBase_path + "\\Users";
 const static std::string Admins_path = Users_path + "\\Admins";
 const static std::string Customers_path = Users_path + "\\Customers";
 const static std::string customer_data_file_path = DataBase_path + "\\CustomersAccountData";
 const static std::string Admin_data_file_path = DataBase_path + "\\AdminsAccountData";

 const static std::string id_customer =Users_path + "\\IDSCustomer.txt";
 const static std::string id_Admins =Users_path + "\\IDSAdmin.txt";

 const static std::string CLEAR = "cls";
#else

 const static std::string appName = "Bank_System";
 const static char* base = std::getenv("HOME");
 const static std::string basic_folder = std::string(base) + "/.local/share/" + appName;

 const std::string path_format = "/";

 const static std::string DataBase_path = basic_folder + path_format + "Database";
 const static std::string Users_path = DataBase_path + "/Users";
 const static std::string Admins_path = Users_path + "/Admins";
 const static std::string Customers_path = Users_path + "/Customers";
 const static std::string customer_data_file_path = DataBase_path + "/CustomersAccountData";
const static std::string Admin_data_file_path = DataBase_path + "/AdminsAccountData";

 const static std::string id_customer =Users_path + "/IDSCustomer.txt";
 const static std::string id_Admins =Users_path + "/IDSAdmin.txt";

 const static std::string CLEAR = "clear";

#endif
}


#endif // PATH_H
