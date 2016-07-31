//
//  Driver.hpp
//  MUSLA
//
//  Created by jimmy zhong on 2016-07-30.
//  Copyright © 2016 JuneKim_JimmyZhong. All rights reserved.
//

#ifndef Driver_hpp
#define Driver_hpp
#include "WordPair.h"
#include <stdio.h>
#include "BSTNode.h"
class Driver{
private:
    
    static const int tableSize = 10;
    
    WordPair *Tableitems[tableSize];
    
    
public:
    void Populate();
    void lookUpKlingon();
    void BSTPrintAll(BSTNode<WordPair>* root);
    
};

#endif /* Driver_hpp */
