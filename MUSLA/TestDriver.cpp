//
//  TestDriver.cpp
//  MUSLA
//
//  Created by June Kim on 2016-07-21.
//  Copyright (c) 2016 JuneKim_JimmyZhong. All rights reserved.
//

#include "TestDriver.h"
#include "Student.hpp"
#include "University.hpp"
#include <assert.h>


void TestDriver::testAllTheThings(){
    
    testStudentThings();
    
    
}


void TestDriver::testStudentThings(){
    
    Student newStudent = Student();
    assert(newStudent.firstName == "");
    
}