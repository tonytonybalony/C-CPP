#include <stdio.h>

int main() {
    printf("This is C example file 7\n");
    
    // Example: Pointers
    int x = 42;
    int *ptr = &x;
    printf("Value: %d\n", x);
    printf("Address: %p\n", &x);
    printf("Pointer value: %d\n", *ptr);
    
    return 0;
}