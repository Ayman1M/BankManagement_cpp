//
// Created by ayman on 5/18/25.
//

#include "../lib_h/User.h"


string User::get_id() {
    return id;
}
string User::get_name() {
    return name;
}
string User::get_email() {
    return email;
}
string User::get_password() {
    return password;
}
ll User::get_phone_number() {
    return phone_number;
}
string User::get_address() {
    return address;
}

string User::set_id() {
    do {
        cout << "Enter your id(5 characters): ";
         id = in.getString();
    }while (id.length() != 5 ||id.empty());
    return id;
}

string User::set_name() {
    do {
        cout << "Enter your name(5 characters at least): ";
         name = in.getString();
    }while (name.length() < 5 || name.empty());
    return name;
}
string User::set_email() {
    do {
        cout << "Enter your email: ";
         email = in.getString();
    }while (email.find('@') == string::npos || email.find('.') == string::npos);
    return email;
}

string User::set_password() {
    do {
        cout << "Enter your password(8 characters at least): ";
         password = in.getString();
    }while (password.length() < 5 || password.empty());
    return password;
}

ll User::set_phone_number() {
    do {
        cout << "Enter your phone number(10 digits): ";
         this->phone_number = in.getInt();
    }while (phone_number < 1000000000 || phone_number > 9999999999);
    return phone_number;
}
string User::set_address() {
    do {
        cout << "Enter your address(5 characters at least): ";
         address = in.getString();
    }while (address.length() < 5 || address.empty());
    return address;
}