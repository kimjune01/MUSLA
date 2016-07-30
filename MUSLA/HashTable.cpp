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
    string english = EK.english;
    int index = Hash(english);
    //TODO the english and klingon public and private. 
    if(HTable[index]->data.english == "empty"){
        HTable[index]->data.english = EK.english;
        HTable[index]->data.klingon = EK.klingon;
    }else{
        HChain *currentChain =new HChain();
        currentChain->insertNode(&(EK),HTable[index]);
    }
}



WordPair* HashTable::lookUpKlingon(string english){
    int index = Hash(english);
    bool foundEnglish = false;
    string klingon;
    Node<WordPair>* Ptr = HTable[index];
    while(Ptr !=NULL){
        if(Ptr->data.english ==english){
            foundEnglish = true;
            klingon = Ptr->data.klingon;
            cout<<"english:"<<Ptr->data.english<<" "<<"klingon:"<<Ptr->data.klingon<<endl;
            return &Ptr->data;
        }Ptr = Ptr->next;
    }
    return NULL;
}

//Hashish
int HashTable::Hash(string english){
    int hash =0;
    int index;
    // TODO: check if int i = 0 works on linux
    for(int i = 0; i<english.length();i++){
        hash = hash +(int)english[i];
        }
    index =hash% tableSize;
    cout<< "index"<<english<<":"<<index<<endl;
    return index;
}

