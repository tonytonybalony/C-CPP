#include <iostream>

class Person {
private:
    std::string name;
    int age;
    
public:
    Person(std::string n, int a) : name(n), age(a) {}
    
    void display() {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

int main() {
    std::cout << "This is C++ example file 4" << std::endl;
    
    // Example: Classes and objects
    Person person1("Alice", 25);
    person1.display();
    
    return 0;
}