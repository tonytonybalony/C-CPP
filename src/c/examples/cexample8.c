#include <stdio.h>
#include <string.h>

int main() {
    printf("This is C example file 8\n");
    
    // Example: Strings
    char str1[] = "Hello";
    char str2[] = "World";
    char result[100];
    
    strcpy(result, str1);
    strcat(result, " ");
    strcat(result, str2);
    
    printf("Result: %s\n", result);
    
    return 0;
}