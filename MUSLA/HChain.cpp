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
HChain::HChain(){
    head = NULL;
    next = NULL;
}


bool HChain::insertNode( WordPair * newWord, Node<WordPair> *currentHIndex){
    
    Node<WordPair>* newNode = new Node<WordPair>(*newWord);
    if(head ==NULL){
        head = newNode;
    }else{
        Node<WordPair> *Ptr = head;
        while(Ptr->next!=NULL){
            Ptr = Ptr->next;
        }
        Ptr->next = newNode;
    }
    
    return true;
    
}

void HChain::printAll(){
    Node<WordPair> *current = head;
    while(current!=NULL){
        cout<< "english:"<<current->data.english<<"klingon:"<<current->data.klingon;
        current = current->next;
    }
    
    cout<<"end";
}