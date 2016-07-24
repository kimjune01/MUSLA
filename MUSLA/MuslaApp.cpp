//
//  MuslaApp.cpp
//  MUSLA
//
//  Created by June Kim on 2016-07-21.
//  Copyright (c) 2016 JuneKim_JimmyZhong. All rights reserved.
//

#include "MuslaApp.h"
#include <assert.h>
#include <iostream>
#include <ctime>

using namespace std;

//void MuslaApp::demo(){
//    //TODO: search them really fast
//    //TODO: time the execution time... save for later.
//    //time = start timer
//    University SFU = University("SFU", "8888", "@sfu.ca");
//    assert(universityNamed("SFU")->mailingAddress == "8888");
//    //time == end timer
//    //cout << "We found SFU in " << someTime <<"ms!"<< endl;
//    
//    
//    
//}

void MuslaApp::enlist(Student students[]){
    //TODO:
}

Student MuslaApp::sampleStudent(int seed){
    //TODO: generate a student from a seed...
    return Student(seed, "first", "last");
}