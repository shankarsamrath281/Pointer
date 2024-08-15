#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int *)malloc(sizeof(int));  // Allocate memory for an integer
    if (ptr == NULL) {
        // Handle memory allocation failure
        return 1;
    }
    
    *ptr = 42;  // Assign a value to the allocated memory
    printf("Value: %d\n", *ptr);  // Outputs: 42

    free(ptr);  // Deallocate the memory
    // ptr is now a dangling pointer

    // Accessing or dereferencing ptr here would be dangerous
    // printf("Value after free: %d\n", *ptr);  // Undefined behavior

    return 0;
}
