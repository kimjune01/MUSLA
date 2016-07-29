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
#include "WordPair.h"
#include "Node.h"
#include "HashChain.hpp"
using namespace std;

//TODO: ADD Templating make it independant. 

class HashTable {
    
private:
    static const int tableSize = 200;
    
 
   
    
public:
    HashTable();
     
    int Hash(WordPair key);
    Node<WordPair>* HTable[tableSize];
    void Insert(WordPair EK);
    
    //TODO: implement
    
    //write the default constructor
    //write an insert and a delete.
    //write a delete
};


#endif /* HashTable_hpp */
