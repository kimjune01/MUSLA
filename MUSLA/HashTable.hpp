//
//  HashTable.hpp
//  MUSLA
//
//  Created by June Kim on 2016-07-21.
//  Copyright © 2016 JuneKim_JimmyZhong. All rights reserved.
//

#ifndef HashTable_hpp
#define HashTable_hpp
#include "Student.hpp"
#include "University.hpp"
#include <stdio.h>
#include <string>

using namespace std;
class HashTable {
    
private:
    static const int tableSize = 100;
    
    struct Node{
        
        University university1;
        Student student1;
        Node *nextID;
        Node *nextLastName;
    };
    
    
    
public:
    HashTable();
    int Hash(string key);
    
    //TODO: implement
    
    //write the default constructor
    //write an insert and a delete.
    //write a delete
};


#endif /* HashTable_hpp */
