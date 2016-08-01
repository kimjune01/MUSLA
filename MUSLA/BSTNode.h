//
//  BSTNode.hpp
//  assignment3
//
//  Created by jimmy zhong on 2016-07-08.
//  Copyright © 2016 jimmy zhong. All rights reserved.
//
#pragma once
#ifndef Node_hpp
#define Node_hpp

#include <stdio.h>

 /* Node_hpp */
#include <string>
#include <stdio.h>
 
using namespace std;

template <class T>
class BSTNode{
    private:
        BSTNode<T>* left;
        BSTNode<T>*right;
        T  data;
    public:
        BSTNode(T insert) : data(insert),left(NULL),right(NULL){};
       // The data in the BSTNode
       // Pointer to next BSTNode
       // Constructors and destructor
    
        bool nodeRight (BSTNode<T>* theData);
    
        bool nodeLeft (BSTNode<T> *theData);
        T getData(){
            return data;
        }
        BSTNode<T> *getLeft(){
            return left;
        }
        BSTNode<T> *getRight(){
            return right;
        }
};

 

template<class T>

bool BSTNode<T>::nodeLeft(BSTNode<T>* thedata){
    left = thedata;
    return true;
}

template<class T>
bool BSTNode<T>::nodeRight(BSTNode<T>* thedata){
    right = thedata;
    return true;
}

#endif
 
