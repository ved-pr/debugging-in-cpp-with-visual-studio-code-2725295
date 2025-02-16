// Debugging in C++ with Visual Studio Code
// Exercise 07_02
// Erroring-Out, by Eduardo Corpeño

#include <iostream>
#include <sstream>

int main(){
    char op;
    int num1, num2;

    while(true){
        std::cout << "Enter an expression (like 5 + 3) or 'q' to quit: ";
        std::string input;
        std::getline(std::cin, input);

        if(input == "q") break;

        std::istringstream iss(input);
        iss >> num1 >> op >> num2; 

        switch(op){
            case '+': std::cout << "Result: " << num1 + num2 << std::endl; break;
            case '-': std::cout << "Result: " << num1 - num2 << std::endl; break;
            case '*': std::cout << "Result: " << num1 * num2 << std::endl; break;
            case '/': std::cout << "Result: " << num1 / num2 << std::endl; break;
        }
    }
    return 0;
}
