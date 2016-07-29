//
//  TestDriver.cpp
//  MUSLA
//
//  Created by June Kim on 2016-07-21.
//  Copyright (c) 2016 JuneKim_JimmyZhong. All rights reserved.
//

#include "TestDriver.h"

#include <assert.h>
#include <ctime>
#include "HashTable.hpp"
#include <iostream>

using namespace std;



void TestDriver::testHashTable(){
    
    HashTable  testHashTable = HashTable();
    for(int i=0; i<100;i++){
//        assert(testHashTable.hashTable[i]->nextID ==NULL);
//        assert(testHashTable.hashTable[i]->nextLastName ==NULL);
//        assert(testHashTable.hashTable[i]->student1.lastName=="");
//        assert(testHashTable.hashTable[i]->student1.firstName=="");
//        assert(testHashTable.hashTable[i]->university1.universityName =="");
//        assert(testHashTable.hashTable[i]->university1.mailingAddress =="");
        
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

 void TestDriver::testAllTheThings(){
       testHashTable();
         //testMuslaThings()
    //TODO:
    //mock universities and students
}

