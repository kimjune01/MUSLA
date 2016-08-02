//
//  main.cpp
//  MUSLA
//
//  Created by June Kim on 2016-07-21.
//  Copyright © 2016 JuneKim_JimmyZhong. All rights reserved.
//

#include <iostream>
#include "Driver.hpp"
#include "TestDriver.h"
//#include "HChain.hpp"
//#include "HashTable.hpp"

// including Hchain with Driver gives error
// including HashTable and Driver gives errors.

int main(int argc,  char * argv[]) {
    //TestDriver *newTest = new  TestDriver ;
    //newTest->testAllTheThings();

   Driver * newDriver = new Driver;
//    
    newDriver->Populate(argc,argv);
    newDriver->Search();
    return 0;
}
