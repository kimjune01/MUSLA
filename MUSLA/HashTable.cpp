//
//  HashTable.cpp
//  MUSLA
//
//  Created by June Kim on 2016-07-21.
//  Copyright © 2016 JuneKim_JimmyZhong. All rights reserved.
//
#include "Node.h"
#include "HashTable.hpp"
#include "WordPair.h"
#include <string>
#include <iostream>
#include <assert.h>
using namespace std;

HashTable::HashTable(){
    int i;
    WordPair * newWordPair = new WordPair("empty","empty");
    Node<WordPair> * newNode = new Node<WordPair>(*newWordPair);
    newNode->next = NULL;
    
    for(i =0; i<tableSize-1;i++){
         HTable[i] = newNode;
    }

}
//TODO: deal with table collisions.currently using chaining
// deal with collisions.
void HashTable::Insert(WordPair EK){
    int index = Hash(EK);
    //TODO the english and klingon public and private. 
    if(HTable[index]->data.english == "empty"){
        HTable[index]->data.english = EK.english;
        HTable[index]->data.klingon = EK.klingon;
    }
    else{
        assert(HTable[index]->data.english != "empty"&&HTable[index]->data.klingon != "empty" );

        
//        Node*Ptr = HTable[index];
//        Node * n = new Node;
//        n->english = english;
//        n->klingon = klingon;
//        n->next = NULL;
        
      
    }
}

int HashTable::Hash(WordPair key){
    int hash =0;
    int index;
    
    index = key.english.length();
    // TODO: check if int i = 0 works on linux
    for(int i = 0; i<key.english.length();i++){
        hash = hash +(int)key.english[i];
        
        
    }
    cout<< "hash = "<<hash<< endl;
    
    index =hash% tableSize;
    cout<< "index:"<<index<<endl;
    
    
    return 0;
}