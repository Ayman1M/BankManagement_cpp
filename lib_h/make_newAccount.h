//
// Created by ayman on 5/19/25.
//

#ifndef MAKE_NEWACCOUNT_H
#define MAKE_NEWACCOUNT_H

#include "header.h"
#include "User.h"
#include "Admin.h"
#include "Permmission.h"
#include "FilesReader.h"

class make_newAccount {

public:
    explicit make_newAccount(const string &id,const string& id_type,string &path_data , string &path_account ,vector<string> &data, vector<string>& account) ;
    bool stat;
    ~make_newAccount() = default;
private:
    fstream file_account , file_data;
    string account_path , account_data_path;
    vector<string> account;
    vector<string> data;
    //Please make sure the data is in the same files docs you will find docs in Folder(lib_h)
    bool detect_id(const string &id , const string &id_type);
    bool if_AccountExit();
    bool make_account();
};



#endif //MAKE_NEWACCOUNT_H
