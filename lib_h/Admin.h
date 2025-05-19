//
// Created by ayman on 5/18/25.
//

#ifndef ADMIN_H
#define ADMIN_H

#include "User.h"
#include "Customer.h"
#include "make_newAccount.h"
#include "FilesReader.h"
#include "Path.h"
class Admin : public User {
         Input in;
         long long Customer_balance = 0;
         vector<string> data;
         string account_path;
         string account_data_path;
         Customer customer;
    public:
         string permission() override ;
         bool make_newCustomer(const string &id);
         bool delete_customer(const string &id);
         bool make_newAdmin(const string& id);
         bool delete_admin(const string &id);
         bool see_all_customers_id();
         bool see_all_admins_id();
         bool see_specific_customer(const string &id);
         bool see_specific_admin(const string& id);

};



#endif //ADMIN_H
/*
 * Can make new admin and customer
 * Can delete admin and customer
 * Can see all customers
 * Can see all admins
 */