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
     
    // note WordPair is overloaded.
    WordPair  insert1 = WordPair("f","klinon1");
    WordPair  insert2 = WordPair("g","klinon1");
    WordPair  insert3 = WordPair("english1","klinon1");
    WordPair  insert4 = WordPair("english2","klinon2");
    WordPair  insert5 = WordPair("english3","klinon4");
    WordPair  insert6 = WordPair("english4","klinon5");
    testHashTable.Insert(insert1);
    testHashTable.Insert(insert1);
    testHashTable.Insert(insert1);
    testHashTable.Insert(insert2);
    testHashTable.Insert(insert3);
    testHashTable.Insert(insert4);
    testHashTable.Insert(insert5);
    testHashTable.Insert(insert6);
    //Note wordpair is overloaded.
//    assert(testHashTable.lookUpKlingon(*insert3) == insert3);
//    assert(*testHashTable.lookUpKlingon(&insert4) == insert4);
//    assert(*testHashTable.lookUpKlingon(&insert5) == insert5);
//    assert(*testHashTable.lookUpKlingon(&insert6) == insert6);
    
    
    
    //search
    
    
}

 void TestDriver::testHashChain(){
     
     WordPair* testword1 =new WordPair( "english1","klingon1");
     WordPair* testword2 =new WordPair( "english2","klingon2");
     WordPair* testword3 =new WordPair( "eng4","klingon3");
     WordPair* testword4 =new WordPair( "english5","klingon4");
     WordPair* testword5 =new WordPair( "english6","klingon5");
     WordPair* testword6 =new WordPair( "eng7","klingon6");
     WordPair* testword7 =new WordPair( "english8","klingon7");
     WordPair* testword8 =new WordPair( "aaa","klingon8");
     WordPair* testword9 =new WordPair( "ddd","klingon9");
     
     
     Node<WordPair> * currentNode = new Node<WordPair>(*testword7);
     HChain * testChain = new HChain();
     //insert
     testChain->insertNode(testword1,currentNode);
     testChain->insertNode(testword2,currentNode);
     testChain->insertNode(testword3,currentNode);
     testChain->insertNode(testword4,currentNode);
     testChain->insertNode(testword5,currentNode);
     testChain->insertNode(testword8,currentNode);
     testChain->insertNode(testword9,currentNode);
     
     //testChain->printAll(currentNode);
     
     //search
     
     testChain->SearchNode("ddd",currentNode);
     // this searchNode test pass.
     
      testChain->SearchNode("aaa",currentNode);
      testChain->SearchNode("eng4",currentNode);
     
     
}
 void TestDriver::testAllTheThings(){
      //testHashChain();
      testHashTable();
     
    //TODO:
    //mock universities and students
}

