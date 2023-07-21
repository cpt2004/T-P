#include <stdio.h>

int getLastDigit(int num) {
    return num % 10;
}

int sumOfLastDigits(int num1, int num2) {
    int lastDigit1 = getLastDigit(num1);
    int lastDigit2 = getLastDigit(num2);
    return lastDigit1 + lastDigit2;
}

int main() {
    int number1 = 12345;
    int number2 = 67890;
    int sum = sumOfLastDigits(number1, number2);
    printf("The sum of the last digits of %d and %d is %d.\n", number1, number2, sum);
    return 0;
}
