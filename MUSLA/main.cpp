//
//  main.cpp
//  MUSLA
//
//  Created by June Kim on 2016-07-21.
//  Copyright © 2016 JuneKim_JimmyZhong. All rights reserved.
//

#include <iostream>

#include "TestDriver.h"
int main(int argc, const char * argv[]) {
    TestDriver *newTest = new  TestDriver ;
    newTest->testAllTheThings();
    return 0;
}
