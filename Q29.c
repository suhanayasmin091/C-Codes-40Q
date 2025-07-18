#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, isPalindrome = 1;
    
    printf("Enter a string: ");
    scanf("%s", str);
    
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    
    for (i = 0, j = length - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            isPalindrome = 0;
            break;
        }
    }
    
    if (isPalindrome) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }
    
    return 0;
}
