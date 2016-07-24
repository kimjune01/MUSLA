//
//  main.cpp
//  MUSLA
//
//  Created by June Kim on 2016-07-21.
//  Copyright © 2016 JuneKim_JimmyZhong. All rights reserved.
//

#include <iostream>

#include "TestDriver.h"
#include "MuslaApp.h"

int main(int argc, const char * argv[]) {
    TestDriver *driver = new TestDriver();
    driver->testAllTheThings();
    
    
    
    //
    //
    
    
    
    MuslaApp app = MuslaApp();
    Student students[1000];
    for (int i = 0; i < 1000; i++) {
        students[i] = app.sampleStudent(i);
    }
    app.enlist(students);
    //TODO: take a bunch of students and universities
    University SFU = University();
    SFU.enroll(students);
//    University UBC = University();
//    UBC.enroll(Student.generateStudents(200));
    
//    app.populate(SFU, UBC, UVIC, BCIT);

//    app.demo();

    return 0;
}
