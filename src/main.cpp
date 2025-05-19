

#include <iostream>
//#include "../lib_h/Input.h"
//#include "../lib_h/Admin.h"
#include "../lib_h/FilesReader.h"
#include "../lib_h/Path.h"
#include "../lib_h/User.h"
#include "../lib_h/Admin.h"
int main() {
    User *user = new Admin();
    cout<< user->permission();

    return 0;
}