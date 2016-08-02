//
//  BST.hpp
//  assignment3
//
//  Created by jimmy zhong on 2016-07-08.
//  Copyright © 2016 jimmy zhong. All rights reserved.
//

#pragma  once
#ifndef _BST_H_INCLUDED
#define _BST_H_INCLUDED
#include <string>
#include <stdio.h>
#include "BSTNode.h"

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






template<class T>
class BST{
    
private:
   
     BSTNode<T>*root;
    
     BSTNode<T>* SearchPrivate(T data,BSTNode<T>* ptr);
     bool AddLeafPrivate(T data, BSTNode<T>*tree);
    
public:
    
    
    BSTNode<T> *getRoot();
    void CreateLeaf(T data);
    BSTNode<T>* Search(T data);
    bool AddLeaf(T data);
    
     
    
};

 /* BST_hpp */
template<class T>
BSTNode<T> *BST<T>::getRoot(){
    return root;
}

template<class T>
void  BST<T>::CreateLeaf(T data){
    
    //create a new function;
    BSTNode<T> *n = new BSTNode<T>(data);
    // expectation use getter and setters for each function
    // expect that one class does not manipulate another instance
    // of class variables.
         return n;
}


template<class T>

BSTNode<T>*BST<T>::Search(T data){

    return SearchPrivate(data, root);

}

//
template<class T>
BSTNode<T>*BST<T>::SearchPrivate(T data, BSTNode<T>* Ptr){
    // check if the data is empty
    if(Ptr !=NULL)
    {
        if(Ptr->getData() == data){
            return Ptr;
        }
        
        // uses operation overloading to compare the size of data.
        else{
            if(data<Ptr->getData()){
                // recursively goes to the left subtree. 
                return SearchPrivate(data, Ptr->getLeft());
            }
            
            else{
                // recursively goes into the right subtree
                return SearchPrivate(data, Ptr->getRight());
            }
            
            }
    }
    else{
        
        return NULL;
    
    }
}

template<class T>
bool BST<T>::AddLeaf(T data){
    

    AddLeafPrivate(data, root);
    return true;
}

template<class T>
// finds the correct position to insert based on data
bool BST<T>::AddLeafPrivate(T data, BSTNode<T> *currenttree){
    
    BSTNode<T> *newleaf = new BSTNode<T>(data);
    
    if (root == NULL){
    
        root = newleaf;
    
    }else if(newleaf->getData() < currenttree->getData()){
        
        if(currenttree->getLeft()!=NULL){//recursivley goes left BSTNode.
              AddLeafPrivate( data,currenttree->getLeft());
            
        }else{
            
            currenttree->nodeLeft(newleaf);
            // insert into new leaf.
        }
    }
    
    else if(newleaf->getData()>currenttree->getData()){
        
        if(currenttree->getRight()!=NULL){
            // recursively goes to the  right BSTNode
            AddLeafPrivate(data,currenttree->getRight() );
        
        }else{
            // sets the BSTNode
            currenttree->nodeRight(newleaf);
        }
        
    }
    
    else{
    //cout<< "The data is already in the list";
        
    }
    
    return true;
}


#endif


