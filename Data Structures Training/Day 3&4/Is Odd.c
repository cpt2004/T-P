#include <stdio.h>

int isOdd(int num) {
    if (num % 2 != 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int number = 15;
    if (isOdd(number)) {
        printf("%d is odd.\n", number);
    } else {
        printf("%d is even.\n", number);
    }
    return 0;
}
