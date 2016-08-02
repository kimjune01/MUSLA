//
//  Driver.hpp
//  MUSLA
//
//  Created by jimmy zhong on 2016-07-30.
//  Copyright © 2016 JuneKim_JimmyZhong. All rights reserved.
//
#pragma once
#ifndef Driver_hpp_Included
#define Driver_hpp_Included

#include <stdio.h>
#include <iostream>
#include <sstream>
#include <fstream>
#include <cstring>
#include <string>
#include <assert.h>
#include "HashTable.hpp"
#include "WordPair.h"
#include "BST.h"


class Driver{
private:
    
    static const int tableSize = 100;
    
    WordPair *Tableitems[tableSize];
    
    
public:
    void Populate(int argc, char * argv[]);
    void Search();
    void BSTPrintAll(BSTNode<WordPair>* root);
    
};

#endif /* Driver_hpp */
