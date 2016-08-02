//
//  HChain.hpp
//  MUSLA
//
//  Created by jimmy zhong on 2016-07-29.
//  Copyright © 2016 JuneKim_JimmyZhong. All rights reserved.
//

#pragma  once
#ifndef HChain_hpp
#define HChain_hpp

#include <stdio.h>
#include <iostream>
#include "Node.h"
#include "WordPair.h"


class HChain{
private:
    
public:
    
    void SearchNode(string english,Node<WordPair>*currentHIndex);
    bool insertNode( WordPair * newWord,Node<WordPair>*currentHIndex);
    void printAll(Node<WordPair>*currentHIndex);
};



#endif /* HChain_hpp */
