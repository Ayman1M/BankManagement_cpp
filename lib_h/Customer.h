//
// Created by ayman on 5/18/25.
//

#ifndef CUSTOMER_H
#define CUSTOMER_H
#include "User.h"


class Customer : public User {
    public:
        string permission() override ;
        explicit Customer();

};



#endif //CUSTOMER_H
