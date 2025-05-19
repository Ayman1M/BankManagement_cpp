//
// Created by ayman on 5/19/25.
//

#include "../lib_h/make_newAccount.h"

bool make_newAccount::if_AccountExit() {
    this->file_account.open(account_path, ios::in);
    this->file_data.open(account_data_path, ios::in);
    bool status = file_account.is_open() && file_data.is_open();

    file_account.close();  file_data.close();
    return status;
}

bool make_newAccount::make_account() {
    this->file_account.open(account_path, ios::out);
    this->file_data.open(account_data_path, ios::out);
    bool *status = new bool;
     *status = file_account.is_open() && file_data.is_open();

    if (!*status) {
        file_account.close();  file_data.close();
        delete status;
        return false;
    }
    delete status;
    for (const auto &i : account) {
        file_account << i << endl;
    }
    file_account.close();
    for (const auto &i : data) {
        file_data << i << endl;
    }
    file_data.close();
    return true;
}
bool make_newAccount::detect_id(const string &id , const string &id_type) {
   fstream file;
   try {
       file.open(id_type, ios::in);
   }catch (const std::exception& e) {
       cout<<"you need fo check "<<id_type<<" file"<<endl;
       return false;
   }
    string line;
    while (getline(file, line)) {
        if (line == id) {
            file.close();
            return true;
        }
    }
    file.close();
    return false;
}
make_newAccount::make_newAccount(const string& id ,const string &id_type,string& path_data , string& path_account ,vector<string> &data, vector<string> &account) {
    this->account_path = path_account;
    this->account_data_path = path_data;
    this->data = data;
    this->account = account;
    if(this->detect_id(id , id_type)) {
        cout << "Account already exists" << endl;
        stat = false;
        return;
    }
    if (if_AccountExit()) {
        cout << "Account already exists" << endl;
        stat = false;
        return;
    }
    if (make_account()) {
        cout << "Account created successfully" << endl;
    } else {
        stat = false;
        cout << "Failed to create account" << endl;
    }
}

