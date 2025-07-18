#include <stdio.h>

int main() {
    int n, pos, i;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the position to delete the element: ");
    scanf("%d", &pos);
    
    if (pos > n || pos <= 0) {
        printf("Invalid position!\n");
        return 0;
    }
    
    for (i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    
    printf("Array after deletion: ");
    for (i = 0; i < n - 1; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
