// Debugging in C++ with Visual Studio Code
// Exercise 07_04
// Handling Exceptions Gracefully, by Eduardo Corpeño

#include <iostream>
#include <sstream>
#include <stdexcept> // For exceptions

int main(){
    char op;
    int num1, num2;

    while(true){
        std::cout << "Enter an expression (like 5 + 3) or 'q' to quit: ";
        std::string input;
        std::getline(std::cin, input);

        if(input == "q") break;

        try{
            std::istringstream iss(input);
            if(!(iss >> num1 >> op >> num2)){
                throw std::invalid_argument("Error: Invalid input format!");
            }

            if(op == '/' && num2 == 0){
                throw std::runtime_error("Error: Division by zero!");
            }

            switch(op){
                case '+': std::cout << "Result: " << num1 + num2 << std::endl; break;
                case '-': std::cout << "Result: " << num1 - num2 << std::endl; break;
                case '*': std::cout << "Result: " << num1 * num2 << std::endl; break;
                case '/': std::cout << "Result: " << num1 / num2 << std::endl; break;
                default: throw std::invalid_argument("Error: Invalid operator!");
            }
        } catch(const std::exception& e){
            std::cerr << e.what() << " Try again." << std::endl;
        }
    }
    return 0;
}
