//
//  main.cpp
//  Calculator
//
//  Created by Jin on 2015. 3. 11..
//  Copyright (c) 2015년 __Jin__. All rights reserved.
//

#include <stdio.h>
#include <string>
#include "System.h"
#include "DumpLogManager.h"

int main(int argc, const char * argv[])
{
    System::GetInstance()->ParseAssemblyDumpFile("./input.txt");
    System::GetInstance()->Run(0);
    DumpLogManager::GetInstance()->WriteFile("./result.txt");
    
    return 0;
}
