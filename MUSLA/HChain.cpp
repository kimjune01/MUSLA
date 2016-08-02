//
//  HChain.cpp
//  MUSLA
//
//  Created by jimmy zhong on 2016-07-29.
//  Copyright © 2016 JuneKim_JimmyZhong. All rights reserved.
//
#include "HChain.hpp"

using namespace std;

//Note only searches the for the value of a chained hash table index
// not the entire hash table
WordPair* HChain::SearchNode(string english,Node<WordPair>* currentHIndex){
    
    
    Node<WordPair> *current = currentHIndex;
    while(current!=NULL){
        if(current->data.english == english){
            return &current->data;
        }
        current = current->next;
    }
    
    WordPair *notWord = new WordPair("","");
    return    notWord;
}


//Note only inserts links into a index of hashtable
//not the entire hash table
bool HChain::insertNode(WordPair * newWord,Node<WordPair>*currentHIndex){
    
    Node<WordPair>* newNode = new Node<WordPair>(*newWord);
    newNode->next = NULL;
    Node<WordPair>* Ptr = currentHIndex;
    while(Ptr->next!=NULL){
            Ptr = Ptr->next;
        }
        Ptr->next = newNode;
    return true;
}


//Note prints all the nodes of a chain of a table index
// not the entire hashtable 
void HChain::printAll(Node<WordPair> *currentHIndex){
    Node<WordPair> *current = currentHIndex;
    while(current!=NULL){
        cout<< "english:"<<current->data.english<<"klingon:"<<current->data.klingon<<endl;
        current = current->next;
    }
    
    cout<<"end";
}