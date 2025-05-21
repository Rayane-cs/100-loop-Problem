#include <stdio.h>
#include <stdbool.h>

int main() {
    int N;

    // Prompt the user for input
    printf("Enter a number: ");
    scanf("%i", &N);

    // Ensure the input is a non-negative number
    while (N < 0) {
        printf("Please enter a non-negative number: ");
        scanf("%i", &N);
    }

    // Check if the number belongs to the Fibonacci sequence
    if (N == 0 || N == 1) {
        printf("%i belongs to the Fibonacci sequence.\n", N);
    } else {
        int a = 0, b = 1, tmp = 0;
        bool belongs = false;

        while (b <= N) {
            if (b == N) {
                belongs = true;
                break;
            }
            tmp = a + b;
            a = b;
            b = tmp;
        }

        if (belongs)
            printf("%i belongs to the Fibonacci sequence.\n", N);
        else
            printf("%i does not belong to the Fibonacci sequence.\n", N);
    }

    return 0;
}