//
//  Driver.cpp
//  MUSLA
//
//  Created by jimmy zhong on 2016-07-30.
//  Copyright © 2016 JuneKim_JimmyZhong. All rights reserved.
//


#include "HashTable.hpp"
#include "Driver.hpp"

HashTable * newHTable = new HashTable;



void Driver::Populate(int argc, char * argv[]){
    BST<WordPair>*WordPairtree = new BST<WordPair>;
    
    
    string aLine;
    ifstream myfile ;
    myfile.open("data.txt");
    string english = " ";
    
    if(myfile.fail()) {
        cout << "file is not open"<<endl;
    }
    // get the next line of input
    
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
        WordPairtree->AddLeaf(*inputword);
        newHTable->Insert(*inputword);
         

        // inserting the elements works.
        // TODO: make the hash function better
        // maybe increase the table size.
        if(argc>1){
            string arg1 = argv[1];
            if((arg1 =="display")){
                BSTNode<WordPair> * nodeTree = WordPairtree->getRoot();
                //assert(nodeTree->getData().english == "stop");
                BSTPrintAll(nodeTree);
                
            }

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
