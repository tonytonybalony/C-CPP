#include <iostream>
#include <string>

class Person {
private:
    std::string name;
    int age;

public:
    // Constructor
    Person(const std::string& n, int a) : name(n), age(a) {}
    
    // Getter methods
    std::string getName() const { return name; }
    int getAge() const { return age; }
    
    // Setter methods
    void setName(const std::string& n) { name = n; }
    void setAge(int a) { 
        if (a >= 0) age = a; 
    }
    
    // Method to display person info
    void display() const {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
    
    // Method to check if adult
    bool isAdult() const {
        return age >= 18;
    }
};

class Student : public Person {
private:
    std::string school;
    double gpa;

public:
    Student(const std::string& name, int age, const std::string& s, double g) 
        : Person(name, age), school(s), gpa(g) {}
    
    std::string getSchool() const { return school; }
    double getGPA() const { return gpa; }
    
    void setGPA(double g) {
        if (g >= 0.0 && g <= 4.0) gpa = g;
    }
    
    void display() const{
        Person::display();
        std::cout << "School: " << school << ", GPA: " << gpa << std::endl;
    }
};

int main() {
    std::cout << "=== OOP Example with Person and Student ===\n" << std::endl;
    
    // Create a Person object
    Person person("Alice", 25);
    std::cout << "Person created:" << std::endl;
    person.display();
    std::cout << "Is adult: " << (person.isAdult() ? "Yes" : "No") << std::endl;
    
    std::cout << std::endl;
    
    // Create a Student object
    Student student("Bob", 20, "MIT", 3.8);
    std::cout << "Student created:" << std::endl;
    student.display();
    std::cout << "Is adult: " << (student.isAdult() ? "Yes" : "No") << std::endl;
    
    std::cout << std::endl;
    
    // Modify student
    student.setGPA(3.9);
    std::cout << "After GPA update:" << std::endl;
    student.display();
    
    return 0;
}
