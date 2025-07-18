#include <stdio.h>

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);  // Recursive call
}

int main() {
    int n;
    
    printf("Enter the position (n): ");
    scanf("%d", &n);
    
    if (n < 0) {
        printf("Invalid input.\n");
    } else {
        printf("Fibonacci number at position %d is %d\n", n, fibonacci(n));
    }
    
    return 0;
}
