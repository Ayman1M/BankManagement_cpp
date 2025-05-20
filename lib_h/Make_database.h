//
// Created by ayman on 5/19/25.
//

#ifndef MAKE_DATABASE_H
#define MAKE_DATABASE_H

#include <fstream>
#include <filesystem>
#include "Path.h"
using namespace std;
namespace fs = std::filesystem;


namespace NEW_DATABASE {
    // Function to create a folder for the application
    inline bool MAKEAPPFOLDER() {
        return fs::create_directories(Path::basic_folder);
    }
    // Function to create a folder for the database
    inline bool MAKE_DATABASE() {
        return fs::create_directories(Path::DataBase_path);
    }
    // Function to create a folder for the users
    inline bool MAKE_USERS() {
        return fs::create_directories(Path::Users_path);
    }
    // Function to create a folder for the admins
    inline bool MAKE_ADMINS() {
        return fs::create_directories(Path::Admins_path);
    }
    // Function to create a folder for the customers
    inline bool MAKE_CUSTOMERS() {
        return fs::create_directories(Path::Customers_path);
    }
    // Function to create a file for the customer data
    inline bool MAKE_CUSTOMER_DATA_FILE() {
        return fs::create_directories(Path::customer_data_file_path);
    }
    // Function to create a file for the admin data
    inline bool MAKE_ADMIN_DATA_FILE() {
        return fs::create_directories(Path::Admin_data_file_path);
    }
    // Function to create a file for the customer ID
    inline bool MAKE_CUSTOMER_ID_FILE() {
        fstream file(Path::id_customer , ios::out);
        bool status = file.is_open();
        file.close();
        return status;
    }
    // Function to create a file for the admin ID
    inline bool MAKE_ADMIN_ID_FILE() {
        fstream file(Path::id_Admins , ios::out);
        bool status = file.is_open();
        file.close();
        return status;
    }
}
#endif //MAKE_DATABASE_H
