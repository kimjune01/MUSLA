//
//  MuslaApp.h
//  MUSLA
//
//  Created by June Kim on 2016-07-21.
//  Copyright (c) 2016 JuneKim_JimmyZhong. All rights reserved.
//

#ifndef __MUSLA__MuslaApp__
#define __MUSLA__MuslaApp__

#include <stdio.h>
#include "University.hpp"
#include "Student.hpp"
#include <string.h>

class MuslaApp {
    //TODO: has a hash table of universities indexed by name
    //TODO: has a hash table of students indexed by student ID
    
public:
    //Once entered the name of a university, find the selected university in O(1).
    University *findUniversityNamed(string universityName);
    //Display all students at the university by ascending alphabetical order of last name. O(n)
    void displayStudentsByLastNameIn(University *university);
    //Display all students at the university by ascending numerical order of student number. O(n)
    void displayStudentsByStudentNumberIn(University *university);
    //find by last name. O(log n)
    Student *studentWithLastName(string lastName);
    //find by student number. O(1)
    Student *studentWithNumber(unsigned int studentNumber);
    
    //display information. O(1)
    void display(University *university);
    void display(Student *student);
    
    
};

#endif /* defined(__MUSLA__MuslaApp__) */
