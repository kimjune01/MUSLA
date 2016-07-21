//
//  Student.hpp
//  MUSLA
//
//  Created by June Kim on 2016-07-21.
//  Copyright © 2016 JuneKim_JimmyZhong. All rights reserved.
//

#ifndef Student_hpp
#define Student_hpp

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>

/*
 student number,
 student last name,
 student first name,
 student mailing address,
 student email address,
 name of high school,
 programs currently enrolled (e.g.: Math Major and/or Physics Minor and/or etc...),
 faculty (e.g.: Science, Applied Science, etc...).
 
 */
using namespace std;

class Student {

    
public:
    unsigned int studentNumber;
    string firstName;
    string lastName;
    string mailingAddress;
    string emailAddress;
    string highSchool;
    vector<string> programsEnrolled;
    
    Student();
    Student(unsigned int number, string first, string last) : studentNumber(number), firstName(first), lastName(last){};
    unsigned int index() {return studentNumber;}
    
};


#endif /* Student_hpp */
