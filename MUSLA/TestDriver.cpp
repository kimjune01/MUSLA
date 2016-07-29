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
    
    //default constructor test
    HashTable  testHashTable = HashTable();
    for(int i=0; i<100;i++){
        assert(testHashTable.HTable[i]->english =="empty");
        assert(testHashTable.HTable[i]->klingon =="empty");
        assert(testHashTable.HTable[i]->next == NULL);
    }
    // expected result is this to output nothing.
    
    // hash function test. returns a number from a string
    testHashTable.Hash("Paul");
    testHashTable.Hash("dibby");
     testHashTable.Hash("dabby");

   testHashTable.Hash("dubby");

    testHashTable.Hash("zzzsas");

  testHashTable.Hash("asaas");

    
    
    /*
    HashTable  testHashTable = *new HashTable;
    
    testHashTable->insert("Paul")= testHashTable->search("Paul");
     testHashTable->insert("Jimmy")= testHashTable->search("Jimmy");
     testHashTable->insert("June")= testHashTable->search("June");
     testHashTable->insert("July")= testHashTable->search("July");
 
     
     testHashTable->printall();
   
    */
    
    
    
    }

 void TestDriver::testAllTheThings(){
       testHashTable();
         //testMuslaThings()
    //TODO:
    //mock universities and students
}

