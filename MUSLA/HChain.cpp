//
//  HChain.cpp
//  MUSLA
//
//  Created by jimmy zhong on 2016-07-29.
//  Copyright © 2016 JuneKim_JimmyZhong. All rights reserved.
//
using namespace std;
#include <stdio.h>
#include <iostream>
#include "HChain.hpp"
#include "WordPair.h"
#include "Node.h"

void HChain::SearchNode( string english,Node<WordPair>* currentHIndex){
    //TODO: make this work with hashtable look up.
    
    Node<WordPair> *current = currentHIndex;
    
    while(current!=NULL){
        if(current->data.english == english){
            cout<<"found"<<"english:"<<current->data.english<<"klingon:"<<current->data.klingon;
            return;
        }
        
        current = current->next;
    }
    
    
}
// TODO: get the Node as an agument pointer and then add things to that Node via using
// HChain class.
bool HChain::insertNode( WordPair * newWord,Node<WordPair>*currentHIndex){
    Node<WordPair>* newNode = new Node<WordPair>(*newWord);
    newNode->next = NULL;
    
    Node<WordPair>* Ptr = currentHIndex;
    while(Ptr->next!=NULL){
            Ptr = Ptr->next;
        }
        Ptr->next = newNode;
    
    
    return true;
    
}

void HChain::printAll(Node<WordPair> *currentHIndex){
    Node<WordPair> *current = currentHIndex;
    while(current!=NULL){
        cout<< "english:"<<current->data.english<<"klingon:"<<current->data.klingon<<endl;
        current = current->next;
    }
    
    cout<<"end";
}