//
// Created by ayman on 5/19/25.
//

#ifndef DATABASE_ISEXIT_H
#define DATABASE_ISEXIT_H

#include "Path.h"
#include <filesystem>

namespace fs = std::filesystem;
namespace checkDATABASE {
    // Function to check if the application folder exists
    inline bool basicFolder() {
        return fs::exists(Path::basic_folder);
    }
    // Function to check if the database folder exists
    inline bool SDATABASE() {
        return fs::exists(Path::DataBase_path);
    }
    // Function to check if the users folder exists
    inline bool ISUSERS() {
        return fs::exists(Path::Users_path);
    }
    // Function to check if the admins folder exists
    inline bool ISADMINS() {
        return fs::exists(Path::Admins_path);
    }
    // Function to check if the customers folder exists
    inline bool ISCUSTOMERS() {
        return fs::exists(Path::Customers_path);
    }
    // Function to check if the customer data file exists
    inline bool ISCUSTOMERDATAFILE() {
        return fs::exists(Path::customer_data_file_path);
    }
    // Function to check if the admin data file exists
    inline bool ISADMINDATAFILE() {
        return fs::exists(Path::Admin_data_file_path);
    }
    // Function to check if the customer ID file exists
    inline bool ISCUSTOMERIDFILE() {
        return fs::exists(Path::id_customer);
    }
    // Function to check if the admin ID file exists
    inline bool ISADMINIDFILE() {
        return fs::exists(Path::id_Admins);
    }
}


#endif //DATABASE_ISEXIT_H
