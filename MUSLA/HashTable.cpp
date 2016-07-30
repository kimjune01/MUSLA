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
#include "HChain.hpp"
using namespace std;

HashTable::HashTable(){
    int i;
    WordPair * newWordPair;
    for(i =0; i<tableSize;i++){
        newWordPair= new WordPair("empty","empty");
         HTable[i] = new Node<WordPair>(*newWordPair);
        HTable[i]->next =NULL;
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
    }else{
        HChain *currentChain =new HChain();
        currentChain->insertNode(&(EK),HTable[index]);
    }
}



WordPair* HashTable::FindKlingon(string english){
    WordPair * englishSearch = new WordPair(english,"");
    int index = Hash(*englishSearch);
    bool found = false; 
    WordPair *p ;
    return p;
}

//Hashish
int HashTable::Hash(WordPair key){
    int hash =0;
    int index;
    // TODO: check if int i = 0 works on linux
    for(int i = 0; i<key.english.length();i++){
        hash = hash +(int)key.english[i];
        }
    index =hash% tableSize;
    cout<< "index"<<key.english<<":"<<index<<endl;
    return index;
}