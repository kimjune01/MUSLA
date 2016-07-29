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
#include "WordPair.h"
#include "HashChain.h"

using namespace std;



void TestDriver::testHashTable(){
    
    //default constructor test
    HashTable  testHashTable = HashTable();
    return;
    for(int i=0; i<100;i++){
        assert(testHashTable.HTable[i]->data.english =="empty");
        assert(testHashTable.HTable[i]->data.klingon =="empty");
        assert(testHashTable.HTable[i]->next == NULL);
    }
    // expected result is this to output nothing.
    
    // hash function test. returns a number from a string
    WordPair  insert1 = WordPair("ffff","klinon1");
    WordPair  insert2 = WordPair("gggg","klinon1");
    WordPair  insert3 = WordPair("english1","klinon1");
    WordPair  insert4 = WordPair("english1","klinon1");
    
    testHashTable.Hash(insert1);
    testHashTable.Hash(insert2);
    testHashTable.Hash(insert3);
    testHashTable.Hash(insert4);
 
    
    
    /*
    HashTable  testHashTable = *new HashTable;
    
    testHashTable->insert("Paul")= testHashTable->search("Paul");
     testHashTable->insert("Jimmy")= testHashTable->search("Jimmy");
     testHashTable->insert("June")= testHashTable->search("June");
     testHashTable->insert("July")= testHashTable->search("July");
 
     
     testHashTable->printall();
   
    */
    
    
    
    }

 void TestDriver::testHashChain(){
     // is working 
    WordPair* testword1 =new WordPair( "english3","klingon3");
     WordPair* testword2 =new WordPair( "english2","klingon2");
     WordPair* testword3 =new WordPair( "english1","klingon1");
    Node<WordPair> * currentNode = new Node<WordPair>(*testword1);
    
    HChain * testChain = new HChain();
    
    testChain->insertNode(testword1,currentNode);
     testChain->insertNode(testword2,currentNode);
     testChain->insertNode(testword3,currentNode);
     testChain->printAll();
     
    
}
 void TestDriver::testAllTheThings(){
       testHashTable();
     testHashChain();
    //TODO:
    //mock universities and students
}

