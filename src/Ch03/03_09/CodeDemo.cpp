// Debugging in C++ with Visual Studio Code
// Challenge Solution 03_09
// Find and Fix the Bug, by Eduardo Corpeño

// File: main.cpp
#include <iostream>
#include "lib.h" // Include the header file for the linker error example

// Added Linker Error: Redefinition of 'sharedVar' across files
int sharedVar = 100; // Error: Redefinition of 'sharedVar', already defined in 'variables.h'


extern void undefinedFunction(); // Error: Undefined reference to 'undefinedFunction'

// Function declaration
void printMessage(int value);

int main(){
    // Syntax Errors
    std::cout << "This line is missing a semicolon" // Error: Syntax error, expected ';'

    int x = 10;
    int x = 20; // Error: Redefinition of 'x' (this is a semantic error, not syntax; explanation below)

    // Added Syntax Error: Mismatched parentheses
    if(x > 0) {// Error: Missing opening brace
      std::cout << "Positive number";
    }
    else{
        std::cout << "Positive number";
    }

    // Semantic Errors
    int age = "twenty-five"; // Error: Incompatible type assignment

    printMessage(); // Error: Wrong number of arguments passed to a function

    auto num; // Error: 'num' is declared with 'auto' but not initialized

    int& ref; // Error: Uninitialized reference variable

    y = age * 2; // Error: 'y' is not declared in this scope

    undefinedFunction(); // Linker error: No definition provided for 'undefinedFunction'

    return "success"; // Error: Incompatible return type, expected 'int'
    
}

// Function definition
void printMessage(int value){
    std::cout << "Value: " << value << std::endl;
}

