//
//  Driver.cpp
//  MUSLA
//
//  Created by jimmy zhong on 2016-07-30.
//  Copyright © 2016 JuneKim_JimmyZhong. All rights reserved.
//


#include "HashTable.hpp"
#include "Driver.hpp"
#include <vector>

HashTable * newHTable = new HashTable;



void Driver::Populate(int argc, char * argv[]){
    vector<WordPair>* wordList = new vector<WordPair>;
    BST<WordPair>*WordPairtree = new BST<WordPair>;
    string aLine;
    ifstream myfile ;
    myfile.open("data.txt");
    string english = " ";
    
    if(myfile.fail()) {
        cout << "file is not open"<<endl;
    }
    // get the next line of input
    int i = 0;
    while ( getline(myfile, aLine) ) {
        //
        char eachLine[100];
        strcpy(eachLine, aLine.c_str());
        string englishWord;
        string klingonWord;
        bool isEnglish = true;
        
        for (int c = 0; c < 100; c++) {
            if (eachLine[c] == '\0') {
                break; //end of the line
            }
            if (eachLine[c] == ' ') {
                continue; //ignore space
            }
            if (eachLine[c] == ':') {
                isEnglish = false;
                continue;
            }
            //
            stringstream ss;
            string s;
            if (isEnglish) {
                char englishLetter;
                ss << eachLine[c];
                ss >> englishLetter;
                englishWord += tolower(englishLetter);
                // adds each letter to english word
            } else {
                char klingonLetter;
                ss << eachLine[c];
                ss  >> klingonLetter;
                klingonWord += tolower(klingonLetter);
            }// add each letter to klingon word
        }
        WordPair  * inputword = new WordPair(englishWord,klingonWord);
        // Htable insert. here.
        Tableitems[i] = inputword;
        i++;
        
    }
    ShuffleThings(Tableitems,i);
    
    for(int j = 0; j<i;j++){
       WordPairtree->AddLeaf(Tableitems[j]);
       newHTable->Insert(Tableitems[j]);
}
    if(argc>1){
        string arg1 = argv[1];
        if((arg1 =="display")){
            BSTNode<WordPair> * nodeTree = WordPairtree->getRoot();
            //assert(nodeTree->getData().english == "stop");
            BSTPrintAll(nodeTree);
            return;
        }
        
    }

}


void Driver::Search(){
    //cout<< "Enter english words to translate"<<endl;
    
    string Line;
    string userinput[100];
    // gets line from input.
    int i = 0;
    // starting the get the user input.
    while(getline(cin, Line)) {   // while (there is data)
        stringstream ss(Line);
        ss >> userinput[i];
        i++;
    }
    cout<<endl;
    // out puts the translated words
    
    int j=0;
    for(j=0;j<i;j++){
        
        WordPair * inputword = new WordPair(userinput[j],"");
        //
        WordPair newtranslation = newHTable->lookUpKlingon(inputword);
        
        if(newtranslation.english==inputword->english){                 // outputs  englishword:klingonword
            cout<<newtranslation.english<<":"<<newtranslation.klingon<<endl;
            
            
        }
        
        
        
    }
}
void Driver::BSTPrintAll(BSTNode<WordPair>* root){
    if(root!=NULL){
        
        if(root->getLeft()!=NULL){
            BSTPrintAll(root->getLeft());
        }
        cout<<root->getData().english<<":"<<root->getData().klingon<<endl;
        
        if(root->getRight()!=NULL){
            BSTPrintAll(root->getRight());
            
        }
    }
    
    
    // for loop to print out all the items in the array.
}

void printArray(int inArray[], int size);
void printArray(WordPair* inArray[], int size) {
    cout << "printing array of size: " << size << endl;
    for (int i = 0; i < size; i++) {
        cout << "at index" << i << " english " << inArray[i]->english<<" klingon "<< inArray[i]->klingon << endl;
    }
    cout << endl;
}
int random(int min, int max);
int random(int min, int max) {
    static bool first = true;
    if ( first )
    {
        srand(time(NULL)); //seeding for the first time only!
        first = false;
    }
    return min + rand() % (max - min);
}
//void shuffleArray(WordPair *arbitraryArray[], int size);
void Driver::shuffleArray(WordPair* arbitraryArray[], int size) {
    //TODO:
    int randInt;
    int otherRandInt;
    
    for (int i = 0; i < size * 2; i++) {
        randInt = random(0, size);
        cout << "randInt: " << randInt << endl;
        otherRandInt = random(0, size);
        if (randInt != otherRandInt) {
            WordPair* temp = arbitraryArray[randInt];
            arbitraryArray[randInt] = arbitraryArray[otherRandInt];
            arbitraryArray[otherRandInt] = temp;
        }
    }
}

void Driver::ShuffleThings(WordPair*someArray[],int arraySize){
    //make a new array
//    int arraySize = 10;
//    int someArray[arraySize];
//    for (int i = 0; i < arraySize; i++) {
//        someArray[i] = i;
//    }
    
    printArray(someArray, arraySize);
    shuffleArray(someArray, arraySize);
    printArray(someArray, arraySize);
    
}


    

