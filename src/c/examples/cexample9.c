#include <stdio.h>

struct Person {
    char name[50];
    int age;
};

int main() {
    printf("This is C example file 9\n");
    
    // Example: Structs
    struct Person person1 = {"Alice", 25};
    
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    
    return 0;
}