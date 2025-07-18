#include <stdio.h>

int main() {
    int n, i, search, found = 0;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the element to search: ");
    scanf("%d", &search);
    
    for (i = 0; i < n; i++) {
        if (arr[i] == search) {
            found = 1;
            printf("Element %d found at position %d.\n", search, i + 1);
            break;
        }
    }
    
    if (!found) {
        printf("Element %d not found.\n", search);
    }
    
    return 0;
}
