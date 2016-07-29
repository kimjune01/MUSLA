//
//  HChain.hpp
//  MUSLA
//
//  Created by jimmy zhong on 2016-07-29.
//  Copyright © 2016 JuneKim_JimmyZhong. All rights reserved.
//


#ifndef HChain_hpp
#define HChain_hpp

#include <stdio.h>



#include "Node.h"
#include "WordPair.h"


class HChain{
private:
    Node<WordPair>* head;
    Node<WordPair> *next;
    
    
public:
    HChain();
    
    void SearchNode(WordPair * searchWord);
    bool insertNode( WordPair * newWord);
    void printAll();
};



#endif /* HChain_hpp */
