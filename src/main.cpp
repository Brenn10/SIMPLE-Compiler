/* 
 * Main file for SIMPLE compiler
 * File:   src/main.cpp
 * Author: Hunter Damron and Dennis Perea
 *          (hdamron17)      (sacredden)
 * 
 * Created on October 20, 2016, 10:37 AM
 */
#include <iostream>
#include <vector>

#include "compiler.h"

void unittest() {
    //TODO unit test for testing code in intermediate stages
}

/*
 * Main function for using SIMPLE compiler
 */
int main(int argc, char** argv) {
    unittest();
    
    //TODO remove test code
    std::string teststr = "let b = 5 * 9 + ( 7 - 9 )";
    std::vector<std::string> testvec = compiler::tokenize(teststr, " ");
    compiler testcplr(&std::cin, &std::cout);
    testcplr.let(&testvec);
    
    return 0;
}

