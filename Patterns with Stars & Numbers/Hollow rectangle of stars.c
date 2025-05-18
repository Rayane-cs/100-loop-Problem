#include <stdio.h>

int main() {
    int rows, cols;
    
    //Prompt the user for input
    printf("Enter number of rows: ");
    scanf("%i", &rows);
    printf("Enter number of columns: ");
    scanf("%i", &cols);
    
    //Ensure the input is a positive number
    while (rows <= 0) {
        printf("Please enter a positive number for rows: ");
        scanf("%i", &rows);
    }
    while (cols <= 0) {
        printf("Please enter a positive number for columns: ");
        scanf("%i", &cols);
    }

    //Output the rectangle
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            if (i == 1 || i == rows || j == 1 || j == cols)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}