#include <stdio.h>
int main() {
    int num, flag = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        printf("%d is prime\n", num);
    else
        printf("%d is not prime\n", num);
    return 0;
}
