//
//  word.cpp
//  assignment2vr2
//
//  Created by jimmy zhong on 2016-07-11.
//  Copyright © 2016 jimmy zhong. All rights reserved.
//

#ifndef _WordPair_H_INCLUDED
#define _WordPair_H_INCLUDED
#include <string>
#include <assert.h>

using namespace std;
// wordpair class with operation overloaded data.
class WordPair{
private:
    
public:
    string klingon;
    string english;
    WordPair(string eng, string kling) : english(eng), klingon(kling){};
    // overload <
    bool operator<(const WordPair &w)const{
        
        int value = this->english.compare(w.english);
        if(value <0  ){
            return true;
        }
        else{
            return false;
        }
    }
    // overload >
    bool operator>(const WordPair &w)const{
        int value = this->english.compare(w.english);
        if(value >0  ){
            return true;
        }
        else{
            return false;
        }
        }
    //overload ==
    bool  operator==(const WordPair &w)const{
        int value = this->english.compare(w.english);
        if(value ==0  ){
            return true;
            }
        else{
            return false;
        }
        
    }
    
    
};

#endif






