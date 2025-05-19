//
// Created by ayman on 5/18/25.
//

#include "../lib_h/Admin.h"

string Admin::permission() {
    return "Admin";
}

bool Admin::make_newCustomer(const string& id){
    this->account_path = Path::Customers_path +Path::path_format + id + ".txt";
    this->account_data_path = Path::customer_data_file_path +Path::path_format + id + ".txt";

    User* customer_local = new Customer();
    vector<string> data;
    vector<string> account;
     customer_local->set_id();
     customer_local->set_name();
     customer_local->set_email();
     customer_local->set_password();
     customer_local->set_phone_number();
     customer_local->set_address();

    data.push_back(customer_local->get_id());
    data.push_back(customer_local->get_name());
    data.push_back(customer_local->get_email());
    data.push_back(to_string(customer_local->get_phone_number()));
    data.push_back(customer_local->get_address());

    account.push_back(customer_local->get_password());
    account.push_back(customer_local->permission());
    delete customer_local;
    make_newAccount files(id,Path::id_customer,account_data_path,account_path,data, account);

    return files.stat;
}
bool Admin::delete_customer(const string &id) {
    this->account_path = Path::Customers_path +Path::path_format + id + ".txt";
    this->account_data_path = Path::customer_data_file_path +Path::path_format + id + ".txt";
    bool status = remove(account_path.c_str()) == 0 && remove(account_data_path.c_str()) == 0;
    return status;
}
bool Admin::make_newAdmin(const string& id){
    this->account_path = Path::Admins_path +Path::path_format + id + ".txt";
    this->account_data_path = Path::Admin_data_file_path +Path::path_format + id + ".txt";

    User* admin_local = new Admin();
    vector<string> data;
    vector<string> account;
    admin_local->set_id();
    admin_local->set_name();
    admin_local->set_email();
    admin_local->set_password();
    admin_local->set_phone_number();
    admin_local->set_address();

    data.push_back(admin_local->get_id());
    data.push_back(admin_local->get_name());
    data.push_back(admin_local->get_email());
    data.push_back(to_string(admin_local->get_phone_number()));
    data.push_back(admin_local->get_address());

    account.push_back(admin_local->get_password());
    account.push_back(admin_local->permission());
    delete admin_local;
    make_newAccount files(id, Path::id_Admins,account_data_path,account_path,data, account);

    return files.stat;
}
bool Admin::delete_admin(const string &id) {
    this->account_path = Path::Admins_path +Path::path_format + id + ".txt";
    this->account_data_path = Path::Admin_data_file_path +Path::path_format + id + ".txt";
    bool status = remove(account_path.c_str()) == 0 && remove(account_data_path.c_str()) == 0;
    return status;
}
bool Admin::see_all_customers_id() {
    FilesReader file(Path::id_customer);
    if (file.line_count == 0) {
        cout << "No customers found." << endl;
        return false;
    }
    cout << "List of all customers:" << endl;
    for (const auto& line : file.lines) {
        cout << line << endl;
        cout << string(20,'-');
    }
    return true;
}
bool Admin::see_all_admins_id() {
    FilesReader file(Path::id_Admins);
    if (file.line_count == 0) {
        cout << "No customers found." << endl;
        return false;
    }
    cout << "List of all customers:" << endl;
    for (const auto& line : file.lines) {
        cout << line << endl;
        cout << string(20,'-');
    }
    return true;
}
bool Admin::see_specific_customer(const string &id) {
    FilesReader file(Path::customer_data_file_path +Path::path_format + id + ".txt");
    if (file.line_count == 0) {
        cout << "No customers found." << endl;
        return false;
    }
    cout << "List of all info:" << endl;
    for (const auto& line : file.lines) {
        cout << line << endl;
        cout << string(20,'-');
    }
    return true;
}
bool Admin::see_specific_admin(const string &id) {
    FilesReader file(Path::Admin_data_file_path +Path::path_format + id + ".txt");
    if (file.line_count == 0) {
        cout << "No admin found." << endl;
        return false;
    }
    cout << "List of all info:" << endl;
    for (const auto& line : file.lines) {
        cout << line << endl;
        cout << string(20,'-');
    }
    return true;
}


