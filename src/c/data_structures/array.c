#include<stdio.h>

int main(){


    int n = 10, k;

    // Variable Length Array (VLA):
    // Allowed in C99 and later, but not in C++ or C89.
    // The value of n must be initialized before this line.
    int a[n]; // OK: n is initialized to 10

    // Undefined behavior: k is uninitialized, so b[k] is invalid!
    // This may cause a crash or unpredictable results.
    int b[k];

    // Array initialization using an initializer list without specifying size:
    // The size is automatically set to the number of elements.
    int c[] = {1, 2, 3, 4, 5}; // size = 5

    // Fixed-size arrays
    double d[10];
    char e[20];

    // Zero-length arrays:
    // Allowed as a compiler extension in some C99/C11 compilers, but not standard in C17.
    int f[0];

    // All elements initialized to 0
    int g[8] = {0};

    // Array assignment
    for (int i=0;i<n;i++){
        a[i]=i*3;
    }

    // Size of an array
    int size = sizeof(a)/sizeof(a[0]);
    printf("Size: %d\n",size);

    // Array operations

        // Traversal
    printf("Traveral operation: ");
    for(int i=0;i<size;i++){
        printf("%d  ",a[i]);
    }
    printf("\n");

        // Insertion
    printf("Enter the value and position you want to insert:");
    int val, pos;
    scanf("%d %d",&val, &pos);
    for (int i=size; i>=pos; i--){
        a[i]=a[i-1];
        if (i==pos)
            a[i]=val;
    }

        // Traversal
    printf("Traveral operation: ");
    for(int i=0;i<size;i++){
        printf("%d  ",a[i]);
    }
    printf("\n");
    
        // Deletion
    printf("Enter the position you want to delete:");
    int dpos;
    scanf("%d",&dpos);
    for (int i=dpos; i<size-1; i++){
        a[i]=a[i+1];
    }
    a[size-1]=0;

        // Traversal
    printf("Traveral operation: ");
    for(int i=0;i<size;i++){
        printf("%d  ",a[i]);
    }
    printf("\n");



    // This is an initialization of a 2D array
    int h[3][3] = {1,2,3,4,5,6,7,8,9};
    // initializer list
    int i[2][3] = { {1, 4, 2}, {3, 6, 8} };

    // Traversal for a 2D array
    printf("Traversal for a 2D array: ");
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            printf("%d  ",h[i][j]);
        }
    }
    printf("\n");


    return 0;
}