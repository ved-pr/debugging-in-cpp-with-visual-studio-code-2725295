// Debugging in C++ with Visual Studio Code
// Exercise 07_02
// Erroring-Out, by Eduardo Corpeño

#include <iostream>
#include <sstream>
#include <cstdlib> // For exit()

int main(){
    char op;
    int num1, num2;

    while(true){
        std::cout << "Enter an expression (like 5 + 3) or 'q' to quit: ";
        std::string input;
        std::getline(std::cin, input);

        if(input == "q") exit(EXIT_SUCCESS);

        std::istringstream iss(input);
        if(!(iss >> num1 >> op >> num2)){
            std::cerr << "Error: Invalid input format!" << std::endl;
            exit(EXIT_FAILURE);
        }

        if(op == '/' && num2 == 0){
            std::cerr << "Error: Division by zero!" << std::endl;
            exit(EXIT_FAILURE);
        }

        switch(op){
            case '+': std::cout << "Result: " << num1 + num2 << std::endl; break;
            case '-': std::cout << "Result: " << num1 - num2 << std::endl; break;
            case '*': std::cout << "Result: " << num1 * num2 << std::endl; break;
            case '/': std::cout << "Result: " << num1 / num2 << std::endl; break;
            default: std::cerr << "Error: Invalid operator!" << std::endl;
                     exit(EXIT_FAILURE);
        }
    }
}
