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
#include "HChain.hpp"

using namespace std;



void TestDriver::testHashTable(){
    //default constructor test
    HashTable  testHashTable = HashTable();
     
    for(int i=0; i<3;i++){
        assert(testHashTable.HTable[i]->data.english =="empty");
        assert(testHashTable.HTable[i]->data.klingon =="empty");
        assert(testHashTable.HTable[i]->next == NULL);
    }
    // expected result is this to output nothing.
    
    // hash function test. returns a number from a string
    WordPair  insert1 = WordPair("f","klinon1");
    WordPair  insert2 = WordPair("g","klinon1");
    WordPair  insert3 = WordPair("english1","klinon1");
    WordPair  insert4 = WordPair("english2","klinon2");
    WordPair  insert5 = WordPair("english4","klinon4");
    WordPair  insert6 = WordPair("english5","klinon5");
    testHashTable.Insert(insert1);
    testHashTable.Insert(insert1);
    testHashTable.Insert(insert1);

    testHashTable.Insert(insert2);
    testHashTable.Insert(insert3);
    testHashTable.Insert(insert4);
    testHashTable.Insert(insert5);
    testHashTable.Insert(insert6);
    
    /*
     assert(testHashTable->search("ffff")==insert1);
     assert(testHashTable->search("gggg")=="klingon1");
     assert(testHashTable->search("english5")=="klingon5");
          */
    
    }

 void TestDriver::testHashChain(){
     
     
     WordPair* testword7 =new WordPair( "english6","klingon6");
     WordPair* testword8 =new WordPair( "english8","klingon8");
     WordPair* testword9 =new WordPair( "english9","klingon9");
     Node<WordPair> * currentNode = new Node<WordPair>(*testword7);
     HChain * testChain = new HChain();
     testChain->insertNode(testword7,currentNode);
     testChain->insertNode(testword9,currentNode);
     testChain->printAll(currentNode);
     WordPair* testSearchWord2 =new WordPair("english6","");
     WordPair* testSearchWord3 =new WordPair( "english9","");
     testChain->SearchNode("english6",currentNode);
     testChain->SearchNode("english9",currentNode);
     // test pass. 
     
}
 void TestDriver::testAllTheThings(){
      //testHashChain();
     testHashTable();
     
    //TODO:
    //mock universities and students
}

