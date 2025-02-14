// Debugging in C++ with Visual Studio Code
// Exercise 07_03
// Using Assertions, by Eduardo Corpeño

#include <iostream>
#include <sstream>
#include <cassert> // For assert()

int main(){
    char op;
    int num1, num2;

    while(true){
        std::cout << "Enter an expression (like 5 + 3) or 'q' to quit: ";
        std::string input;
        std::getline(std::cin, input);

        if(input == "q") break;

        std::istringstream iss(input);
        if(!(iss >> num1 >> op >> num2)){
            std::cerr << "Error: Invalid input format!" << std::endl;
            continue;
        }

        assert((op == '+' || op == '-' || op == '*' || op == '/') && "Error: Invalid operator!");
        assert(!(op == '/' && num2 == 0) && "Error: Division by zero!");

        switch(op){
            case '+': std::cout << "Result: " << num1 + num2 << std::endl; break;
            case '-': std::cout << "Result: " << num1 - num2 << std::endl; break;
            case '*': std::cout << "Result: " << num1 * num2 << std::endl; break;
            case '/': std::cout << "Result: " << num1 / num2 << std::endl; break;
        }
    }
    return 0;
}
