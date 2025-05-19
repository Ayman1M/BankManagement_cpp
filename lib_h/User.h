//
// Created by ayman on 5/18/25.
//

#ifndef USER_H
#define USER_H

#include "header.h"
#include "Input.h"
class User {
        string id;
        string name;
        string email;
        string password;
        long long phone_number = 0;
        string address;
        Input in;
    public:
        virtual string permission() = 0;
      User() {}
      virtual ~User() {}
       string set_id();
       string set_name();
       string set_email();
       string set_password();
       long long set_phone_number();
       string set_address();
        string get_id();
        string get_name();
        string get_email();
        string get_password();
        long long get_phone_number();
        string get_address();

};



#endif //USER_H
