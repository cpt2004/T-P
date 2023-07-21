#include <stdio.h>

int getSecondLastDigit(int num) {
    return (num / 10) % 10;
}

int main() {
    int number = 12345;
    int secondLastDigit = getSecondLastDigit(number);
    printf("The second last digit of %d is %d.\n", number, secondLastDigit);
    return 0;
}
