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
    
    public:
       Node<T>*next;

        Node(T insert) : data(insert),next(NULL){};
       // The data in the node
       // Pointer to next node
       // Constructors and destructor
        T  data;
        bool nodeSetNext (Node<T>* theData);
    
    bool nodeGetNext(){
        return next;
    }
};

 

template<class T>

bool Node<T>::nodeSetNext(Node<T>* thedata){
    next = thedata;
    return true;
}
 #endif
 
