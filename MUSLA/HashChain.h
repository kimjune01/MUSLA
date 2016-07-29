//
//  Chaining.hpp
//  MUSLA
//
//  Created by jimmy zhong on 2016-07-28.
//  Copyright © 2016 JuneKim_JimmyZhong. All rights reserved.
//

#ifndef Chaining_hpp
#define Chaining_hpp

#include <stdio.h>
#include "Node.h"
#include "WordPair.h"

#pragma once
class HashChain{
private:
    Node<WordPair>* head;
    Node<WordPair> *next;
    
    
public:
    HashChain();
    
    WordPair *SearchNode();
    bool insertNode( WordPair * newWord,Node<WordPair>* currentHIndex);
};
#endif /* Chaining_hpp */
 