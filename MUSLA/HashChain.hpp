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
#include "HashTable.hpp"
class HashChain{
private:
    Node<WordPair>* head;
    Node<WordPair> *next;
    
    
public:
    HashChain();
    HashChain *currentChain;
    WordPair *SearchNode();
    bool insertNode( WordPair * newWord,Node<WordPair>* currentHIndex);
};
#endif /* Chaining_hpp */
 