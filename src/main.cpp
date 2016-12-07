#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include "compiler.h"

using namespace std;

int main(int argc, char** argv) {
//    cout << compiler::manual_to_string(3424) << endl; //TODO
    if(argc == 2)
    {
    	compiler::compile(argv[1], "out.sml");
    }
    else if(argc == 3)
    {
        compiler::compile(argv[1], argv[2]);
    }
    else
    {
        cerr << "You must provide a SIMPLE source file\n";
    }
}
