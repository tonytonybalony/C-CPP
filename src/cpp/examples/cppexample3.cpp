#include <iostream>
#include <string>

int main() {
    std::cout << "This is C++ example file 3" << std::endl;
    
    // Example: String handling
    std::string firstName = "John";
    std::string lastName = "Doe";
    std::string fullName = firstName + " " + lastName;
    
    std::cout << "Full name: " << fullName << std::endl;
    std::cout << "Length: " << fullName.length() << std::endl;
    
    return 0;
}