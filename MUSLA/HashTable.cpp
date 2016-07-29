//
//  HashTable.cpp
//  MUSLA
//
//  Created by June Kim on 2016-07-21.
//  Copyright © 2016 JuneKim_JimmyZhong. All rights reserved.
//

#include "HashTable.hpp"
#include <string>
#include <iostream>
#include <assert.h>
using namespace std;

HashTable::HashTable(){
    int i;
    for(i =0; i<tableSize;i++){
         HTable[i] = new Node;
         HTable[i]->english = "empty";
         HTable[i]->klingon  = "empty";
         HTable[i]->next = NULL;
 
    }

}
//TODO: deal with table collisions.currently using chaining
// deal with collisions.
void HashTable::Insert(string english, string klingon){
    int index = Hash(english);
    //TODO the english and klingon public and private. 
    if(HTable[index]->english == "empty"){
        HTable[index]->english = english;
        HTable[index]->klingon = klingon;
    }
    else{
        assert(HTable[index]->english != "empty"&&HTable[index]->klingon != "empty" );
        Node*Ptr = HTable[index];
        Node * n = new Node;
        n->english = english;
        n->klingon = klingon;
        n->next = NULL;
        
      
    }
}

int HashTable::Hash(string key){
    int hash =0;
    int index;
    
    index = key.length();
    // TODO: check if int i = 0 works on linux
    for(int i = 0; i<key.length();i++){
        hash = hash +(int)key[i];
        
        
    }
    cout<< "hash = "<<hash<< endl;
    
    index =hash% tableSize;
    cout<< "index:"<<index<<endl;
    
    
    return 0;
}