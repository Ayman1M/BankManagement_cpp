//
// Created by ayman on 5/18/25.
//

#ifndef ADMIN_H
#define ADMIN_H

#include "User.h"

class Admin : public User {
    public:
        string permission() override ;

};



#endif //ADMIN_H
