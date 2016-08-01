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
#include "WordPair.h"
#include <stdio.h>
#include "BSTNode.h"
 
class Driver{
private:
    
    static const int tableSize = 10;
    
    WordPair *Tableitems[tableSize];
    
    
public:
    void Populate(int argc, char * argv[]);
    void lookUpKlingon();
    void BSTPrintAll(BSTNode<WordPair>* root);
    
};

#endif /* Driver_hpp */
