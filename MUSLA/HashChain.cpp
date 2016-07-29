//
//  Chaining.cpp
//  MUSLA
//
//  Created by jimmy zhong on 2016-07-28.
//  Copyright © 2016 JuneKim_JimmyZhong. All rights reserved.
//

#include "HashChain.h"
#include "Node.h"
#include "HashTable.hpp"


HashChain::HashChain(){
    head = NULL;
    next = NULL;
}


bool HashChain::insertNode( WordPair * newWord, Node<WordPair> *currentHIndex){
 
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

