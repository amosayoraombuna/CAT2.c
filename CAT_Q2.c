#include <stdio.h>

int main() {
    // Declaring and initializing a 2D array with 2 rows and 2 columns
    int scores[2][2] = {
        {85, 90},
        {75, 80}
    };

    // Printing elements using a nested for loop
    printf("Elements of the 2D array:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", scores[i][j]);
        }
        printf("\n");
    }

    return 0;
}