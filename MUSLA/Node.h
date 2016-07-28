//
//  Node.hpp
//  assignment3
//
//  Created by jimmy zhong on 2016-07-08.
//  Copyright © 2016 jimmy zhong. All rights reserved.
//

#ifndef Node_hpp
#define Node_hpp
#pragma once
#include <stdio.h>

 /* Node_hpp */
#include <string>
#include <stdio.h>
 
using namespace std;

template <class T>
class Node{
    private:
        Node<T>* left;
        Node<T>*right;
        T  data;
    public:
        Node(T insert) : data(insert),left(NULL),right(NULL){};
       // The data in the node
       // Pointer to next node
       // Constructors and destructor
    
        bool nodeRight (Node<T>* theData);
    
        bool nodeLeft (Node<T> *theData);
        T getData(){
            return data;
        }
        Node<T> *getLeft(){
            return left;
        }
        Node<T> *getRight(){
            return right;
        }
};

 

template<class T>

bool Node<T>::nodeLeft(Node<T>* thedata){
    left = thedata;
    return true;
}

template<class T>
bool Node<T>::nodeRight(Node<T>* thedata){
    right = thedata;
    return true;
}

#endif
 
