//
// Created by ayman on 5/18/25.
//

#ifndef USER_H
#define USER_H

#include "header.h"
#include "Input.h"
class User {
    private :
        string id;
        string name;
        string email;
        string password;
        ll phone_number = 0;
        string address;
        Input in;
    protected:
        virtual string permission() = 0;
    public:
      User() {}
      virtual ~User() {}

    private:
       string set_id();
       string set_name();
       string set_email();
       string set_password();
       ll set_phone_number();
       string set_address();

    public:
        string get_id();
        string get_name();
        string get_email();
        string get_password();
        ll get_phone_number();
        string get_address();

};



#endif //USER_H
