//
//  University.hpp
//  MUSLA
//
//  Created by June Kim on 2016-07-21.
//  Copyright © 2016 JuneKim_JimmyZhong. All rights reserved.
//

#ifndef University_hpp
#define University_hpp

#include <stdio.h>
#include <string>

using namespace std;

class University {
    string universityName;
    string mailingAddress;
    string emailAddress;
    unsigned int phoneNumber;
    //TODO: has students in a BST.
    
public:
    University(string name, string mailing, string email) :
    universityName(name), mailingAddress(mailing), emailAddress(email){};
    
};

#endif /* University_hpp */
