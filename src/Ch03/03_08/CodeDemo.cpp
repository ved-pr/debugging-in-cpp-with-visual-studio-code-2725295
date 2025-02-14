// Debugging in C++ with Visual Studio Code
// Challenge 03_08
// Find and Fix the Bug, by Eduardo Corpeño

#include <iostream>
#include <string>

int main(){
    int x = 8;
    std::string str = "Hello there!";
    int x = 7;
    std::cout << x << "HEYYYY" << std::endl;
    x = str;
    std::cout << std::endl << std::endl;
    return 0;
}
