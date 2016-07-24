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
#include <ctime>
#include "MuslaApp.h"
#include "HashTable.hpp"
#include <iostream>

using namespace std;

University mockUniversity(int number);

void TestDriver::testHashTable(){
    
    HashTable  testHashTable = HashTable();
    for(int i=0; i<100;i++){
        assert(testHashTable.hashTable[i]->nextID ==NULL);
        assert(testHashTable.hashTable[i]->nextLastName ==NULL);
        assert(testHashTable.hashTable[i]->student1.lastName=="");
        assert(testHashTable.hashTable[i]->student1.firstName=="");
        assert(testHashTable.hashTable[i]->university1.universityName =="");
        assert(testHashTable.hashTable[i]->university1.mailingAddress =="");
         
    }
    // expected result is this to output nothing.
    
    cout<<testHashTable.Hash("Paul");
    
    
    /*
    HashTable  testHashTable = *new HashTable;
    
    testHashTable->data[0]= "UBC";
    testHashTable->data[1]= "SFU";
    testHashTable->data[2]= "BCIT";
    testHashTable->data[3]= "Kapilano";
    
          string firstName = "Jimmy";string  lastName = "Zhong"; break;
          string firstName = "June"; string lastName = "Kim"; break;
          string firstName = "Jess"; string lastName = "Phong"; break;
          string  firstName = "Eric"; string lastName = "M"; break;
          string firstName = "Anne";  string lastName = "Love"; break;
          string firstName = "Bby";  string lastName = "Chn"; break;
            
         
    //insert the students.
    testHashTable.data[0]->insert(Student(1, firstName, lastName));
    testHashTable->data[0]->insert(Student(2, firstName, lastName));
    testHashTable->data[0]->insert(Student(3, firstName, lastName));
    testHashTable->data[0]->insert(Student(4, firstName, lastName));
    
    
    testHashTable.data[0]->insert(Student(1, firstName, lastName));
    testHashTable->data[1]->insert(Student(2, firstName, lastName));
    testHashTable->data[2]->insert(Student(3, firstName, lastName));
    testHashTable->data[3]->insert(Student(4, firstName, lastName));
    
    
    //
    cout<< " the students of university X sorted by last name";
    testHashTable[0]->printAllLastName();
    
    testHashTable[0]->printAllID();
    
    testHashTable[1]->printAllLastName();
    
    testHashTable[1]->printAllID();

    */
    
    
    
    }

Student mockStudent(int number);
void TestDriver::testAllTheThings(){
    testHashTable();
    testStudentThings();
    testUniversityThings();
    //testMuslaThings()
    //TODO:
    //mock universities and students
}


void TestDriver::testStudentThings(){
    
    Student newStudent = Student();
    assert(newStudent.firstName == "");
    
    Student someOtherStudent = Student(111, "Bob", "Uncle");
    assert(someOtherStudent.studentNumber == 111);
    assert(someOtherStudent.firstName == "Bob");
    assert(someOtherStudent.lastName == "Uncle");

    
}

void TestDriver::testUniversityThings(){

    University university1 = University();
    assert(university1.universityName=="");
    assert(university1.mailingAddress=="");
    assert(university1.emailAddress=="");
    
    vector<University> universities;
    for (int i = 1; i < 8; i++) {
        universities.push_back(mockUniversity(i));
    }
    for (int i = 1; i<8; i++) {
        universities[i-1].display();
    }
    
}

void testMuslaThings(){
    //TODO:
    
    MuslaApp musla = MuslaApp();
    
    
}

Student mockStudent(int number){
    string firstName;
    string lastName;
    switch (number) {
        case 1: firstName = "Jimmy"; lastName = "Zhong"; break;
        case 2: firstName = "June"; lastName = "Kim"; break;
        case 3: firstName = "Jess"; lastName = "Phong"; break;
        case 4: firstName = "Eric"; lastName = "M"; break;
        case 5: firstName = "Anne"; lastName = "Love"; break;
        case 6: firstName = "Bby"; lastName = "Chn"; break;
            
        default: assert(true); break;
    }
    return Student(number, firstName, lastName);
}


University mockUniversity(int number){
    string name;
    string mailing;
    string email;
    switch (number) {
        case 1: name = "SFU"; mailing = "8888"; email = "@sfu.ca"; break;
        case 2: name = "UBC"; mailing = "1234"; email = "@ubc.ca"; break;
        case 3: name = "BCIT"; mailing = "45454"; email = "@bcit.ca"; break;
        case 4: name = "EmilyCarr"; mailing = "696969"; email = "@emilycarr.ca"; break;
        case 5: name = "Capilano"; mailing = "5555"; email = "@capilano.ca"; break;
        case 6: name = "Kwantlen"; mailing = "6666"; email = "@kwantlen.ca"; break;
        case 7: name = "UVIC"; mailing = "7777"; email = "@uvic.ca"; break;
        default: assert(true); break;
    }
    return University(name, mailing, email);
}