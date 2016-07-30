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
    WordPair  insert5 = WordPair("english4","klinon4");
    WordPair  insert6 = WordPair("english5","klinon5");
    assert(testHashTable.Hash(insert1)<200);
    assert(testHashTable.Hash(insert2)<200);
    assert(testHashTable.Hash(insert3)<200);
    assert(testHashTable.Hash(insert4)<200);
    assert(testHashTable.Hash(insert5)<200);
    
    cout<<"Hash of ffff is:"<<testHashTable.Hash(insert1);
    cout<<"Hash of enlglish1 is :" <<testHashTable.Hash(insert2);
    
    
    testHashTable.Insert(insert2);
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
     // is working 
    WordPair* testword1 =new WordPair("english1","klingon1");
     WordPair* testword2 =new WordPair("english2","klingon2");
     WordPair* testword3 =new WordPair("english3","klingon3");
     WordPair* testword4 =new WordPair("english4","klingon4");
     WordPair* testword5 =new WordPair("english5","klingon5");
     WordPair* testword6 =new WordPair( "english6","klingon6");
     
     WordPair* testword7 =new WordPair( "english7","klingon7");
     WordPair* testword8 =new WordPair( "english8","klingon8");
     WordPair* testword9 =new WordPair( "english9","klingon9");
     

     
     Node<WordPair> * currentNode = new Node<WordPair>(*testword1);
    
     HChain * testChain = new HChain();
    
    testChain->insertNode(testword1);
     testChain->insertNode(testword2);
     testChain->insertNode(testword3);
     
     testChain->insertNode(testword4);
     testChain->insertNode(testword5);
     testChain->insertNode(testword6);
     testChain->insertNode(testword7);
     testChain->insertNode(testword8);
     testChain->insertNode(testword9);
     testChain->printAll();
     WordPair* testSearchWord2 =new WordPair("english6","klingon6");
     // note returns true if same strings in wordpair.
     WordPair* testSearchWord3 =new WordPair( "english3","klingon3");
     testChain->SearchNode(testSearchWord2);
     testChain->SearchNode(testSearchWord3);
     
     // test pass. 
     
}
 void TestDriver::testAllTheThings(){
       testHashTable();
       testHashChain();
    //TODO:
    //mock universities and students
}

