// Debugging in C++ with Visual Studio Code
// Exercise 06_01
// Registers View, by Eduardo Corpeño

#include <iostream>

int main(){
    std::string name;
    std::cout << "What's your name? " << std::flush;
    std::cin >> name;
    std::cout << "Hey, " << name << ". Here's a fun fact: " << std::flush;

    int sum = 0;
    for(int i = 1; i <= 9; i++){
        std::cout << i << " + " << std::flush;
        sum += i;
    }
    
    std::cout << "10 = " << sum + 10 << std::flush;
    std::cout << std::endl << std::endl;
    return 0;
}
