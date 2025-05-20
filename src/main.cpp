

#include <iostream>
#include "../lib_h/Input.h"
//#include "../lib_h/Admin.h"
// #include "../lib_h/FilesReader.h"
// #include "../lib_h/Path.h"
// #include "../lib_h/User.h"
 #include "../lib_h/Admin.h"
#include "../lib_h/Make_database.h"
#include "../lib_h/database_isExit.h"

bool initialize_database();
int main() {
    if (initialize_database()) {
        std::cout<<"OK!"<<endl;
    }
    Admin admin;
    admin.see_all_admins_id();
    return 0;
}

bool initialize_database() {
    // Check if the application folder exists
    if (!checkDATABASE::basicFolder()) {
        std::cerr << "Application folder does not exist. Creating it..." << std::endl;
        if (!NEW_DATABASE::MAKEAPPFOLDER()) {
            std::cerr << "Failed to create application folder." << std::endl;
            return false;
        }
    }
    // Check if the database folder exists
    if (!checkDATABASE::SDATABASE()) {
        std::cerr << "Database folder does not exist. Creating it..." << std::endl;
        if (!NEW_DATABASE::MAKE_DATABASE()) {
            std::cerr << "Failed to create database folder." << std::endl;
            return false;
        }
    }
    // Check if the users folder exists
    if (!checkDATABASE::ISUSERS()) {
        std::cerr << "Users folder does not exist. Creating it..." << std::endl;
        if (!NEW_DATABASE::MAKE_USERS()) {
            std::cerr << "Failed to create users folder." << std::endl;
            return false;
        }
    }
    // Check if the admins folder exists
    if (!checkDATABASE::ISADMINS()) {
        std::cerr << "Admins folder does not exist. Creating it..." << std::endl;
        if (!NEW_DATABASE::MAKE_ADMINS()) {
            std::cerr << "Failed to create admins folder." << std::endl;
            return false;
        }
    }
    // Check if the customers folder exists
    if (!checkDATABASE::ISCUSTOMERS()) {
        std::cerr << "Customers folder does not exist. Creating it..." << std::endl;
        if (!NEW_DATABASE::MAKE_CUSTOMERS()) {
            std::cerr << "Failed to create customers folder." << std::endl;
            return false;
        }
    }
    // Check if the customer data file exists
    if (!checkDATABASE::ISCUSTOMERDATAFILE()) {
        std::cerr << "Customer data file does not exist. Creating it..." << std::endl;
        if (!NEW_DATABASE::MAKE_CUSTOMER_DATA_FILE()) {
            std::cerr << "Failed to create customer data folder." << std::endl;
            return false;
        }
    }
    // Check if the admin data file exists
    if (!checkDATABASE::ISADMINDATAFILE()) {
        std::cerr << "Admin data file does not exist. Creating it..." << std::endl;
        if (!NEW_DATABASE::MAKE_ADMIN_DATA_FILE()) {
            std::cerr << "Failed to create admin data folder." << std::endl;
            return false;
        }
    }
    // Check if the customer ID file exists
    if (!checkDATABASE::ISCUSTOMERIDFILE()) {
        std::cerr << "Customer ID file does not exist. Creating it..." << std::endl;
        if (!NEW_DATABASE::MAKE_CUSTOMER_ID_FILE()) {
            std::cerr << "Failed to create customer ID file." << std::endl;
            return false;
        }
    }
    // Check if the admin ID file exists
    if (!checkDATABASE::ISADMINIDFILE()) {
        std::cerr << "Admin ID file does not exist. Creating it..." << std::endl;
        if (!NEW_DATABASE::MAKE_ADMIN_ID_FILE()) {
            std::cerr << "Failed to create admin ID file." << std::endl;
            return false;
        }
    }
    return true;
}

