#include <stdio.h>

int main() {
    int num;

    // Prompt the user for input
    printf("Enter a number: ");
    scanf("%d", &num);

    int rev_num = 0, tmp = num;

    // Reverse the number using integer math
    while (tmp != 0) {
        rev_num = rev_num * 10 + (tmp % 10);
        tmp /= 10;
    }

    printf("The reverse of %d is: %d", num, rev_num);

    return 0;
}