#include <stdio.h>

int main() {
    int n, pos, value;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n + 1];
    
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the position to insert the element: ");
    scanf("%d", &pos);
    
    if (pos > n + 1 || pos <= 0) {
        printf("Invalid position!\n");
        return 0;
    }
    
    printf("Enter the value to insert: ");
    scanf("%d", &value);
    
    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = value;
    
    printf("Array after insertion: ");
    for (int i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
