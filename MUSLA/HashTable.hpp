//
//  HashTable.hpp
//  MUSLA
//
//  Created by June Kim on 2016-07-21.
//  Copyright © 2016 JuneKim_JimmyZhong. All rights reserved.
//

#ifndef HashTable_hpp
#define HashTable_hpp


#include <stdio.h>
#include <string>

using namespace std;

//TODO: ADD Templating make it independant. 

class HashTable {
    
private:
    static const int tableSize = 100;
    
    struct Node{
        string english;
        string klingon;
        Node *next;
        
            };
    
    Node* HTable[100];
    
public:
    HashTable();
    int Hash(string key);
    Node * hashTable[tableSize];
    void Insert(string english, string klingon);
    //TODO: implement
    
    //write the default constructor
    //write an insert and a delete.
    //write a delete
};


#endif /* HashTable_hpp */
