#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("This is C example file 10\n");
    
    // Example: Dynamic memory allocation
    int n = 5;
    int *arr = (int*)malloc(n * sizeof(int));
    
    for (int i = 0; i < n; i++) {
        arr[i] = i * 2;
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    
    free(arr);
    
    return 0;
}