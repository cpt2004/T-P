#include <stdio.h>

int main() {
    int num1, num2, sum;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    sum = num1 + num2;

    if (sum % 2 == 0) {
        printf("The sum of the numbers is even.\n");
    } else {
        printf("The sum of the numbers is odd.\n");
    }

    return 0;
}
