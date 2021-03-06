//
//  BST.hpp
//  assignment3
//
//  Created by jimmy zhong on 2016-07-08.
//  Copyright © 2016 jimmy zhong. All rights reserved.
//


#ifndef _BST_H_INCLUDED
#define _BST_H_INCLUDED
#include <string>
#include <stdio.h>
#include "Node.h"





using namespace std;


template<class T>

class BST{
    
private:
   
   
    
     Node<T>*root;
    
     Node<T>* SearchPrivate(T data,Node<T>* ptr);
     bool AddLeafPrivate(T data, Node<T>*tree);
    
public:
    
    
    Node<T> *getRoot();
    void CreateLeaf(T data);
    Node<T>* Search(T data);
    bool AddLeaf(T data);
    
     
    
};

 /* BST_hpp */
template<class T>
Node<T> *BST<T>::getRoot(){
    return root;
}

template<class T>

void  BST<T>::CreateLeaf(T data){
    
    //create a new function;
    Node<T> *n = new Node<T>(data);
    // expectation use getter and setters for each function
    // expect that one class does not manipulate another instance
    // of class variables.
         return n;
}


template<class T>

Node<T>*BST<T>::Search(T data){

    return SearchPrivate(data, root);

}

//
template<class T>
Node<T>*BST<T>::SearchPrivate(T data, Node<T>* Ptr){
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
bool BST<T>::AddLeafPrivate(T data, Node<T> *currenttree){
    
    Node<T> *newleaf = new Node<T>(data);
    
    if (root == NULL){
    
        root = newleaf;
    
    }else if(newleaf->getData() < currenttree->getData()){
        
        if(currenttree->getLeft()!=NULL){//recursivley goes left node.
              AddLeafPrivate( data,currenttree->getLeft());
            
        }else{
            
            currenttree->nodeLeft(newleaf);
            // insert into new leaf.
        }
    }
    
    else if(newleaf->getData()>currenttree->getData()){
        
        if(currenttree->getRight()!=NULL){
            // recursively goes to the  right node
            AddLeafPrivate(data,currenttree->getRight() );
        
        }else{
            // sets the node
            currenttree->nodeRight(newleaf);
        }
        
    }
    
    else{
    //cout<< "The data is already in the list";
        
    }
    
    return true;
}
#endif


