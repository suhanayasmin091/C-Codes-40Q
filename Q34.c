#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;
    
    printf("Array elements using pointer arithmetic:\n");
    
    // Accessing array elements using pointer arithmetic
    for (int i = 0; i < 5; i++) {
        printf("Element %d: %d\n", i + 1, *(ptr + i));  // ptr + i is pointer arithmetic
    }
    
    // Pointer increment
    ptr++;
    printf("After incrementing pointer, the first element is: %d\n", *ptr);
    
    // Pointer decrement
    ptr--;
    printf("After decrementing pointer, the first element is: %d\n", *ptr);
    
    return 0;
}
