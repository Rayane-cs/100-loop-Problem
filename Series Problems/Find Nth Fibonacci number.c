#include <stdio.h>

// Function to get ordinal suffix
const char* getOrdinalSuffix(int n) {
    if (n % 100 >= 11 && n % 100 <= 13)
        return "th";
    switch (n % 10) {
        case 1: return "st";
        case 2: return "nd";
        case 3: return "rd";
        default: return "th";
    }
}

int main() {
    int N;

    // Prompt the user for input
    printf("Enter the term number you are looking for: ");
    scanf("%i", &N);

    // Ensure the input is a positive number
    while (N < 1) {
        printf("Please enter a positive number: ");
        scanf("%i", &N);
    }

    // Calculate the Nth Fibonacci number
    int a = 0, b = 1, tmp;

    if (N == 1) {
        printf("The 1%s Fibonacci number is: %d\n", getOrdinalSuffix(N), a);
    } else {
        for (int i = 2; i < N; i++) {
            tmp = a + b;
            a = b;
            b = tmp;
        }
        printf("The %d%s Fibonacci number is: %d\n", N, getOrdinalSuffix(N), b);
    }

    return 0;
}
