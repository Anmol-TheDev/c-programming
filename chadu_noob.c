#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the number of terms to print: ");
    scanf("%d", &n);

    if (n >= 1) {
        int number = 1;
        printf("%d\n", number);

        for (i = 2; i <= n; i++) {
            if (i % 2 == 0) {
                // If the current term is even, double the previous term
                number = number * 2;
            } else {
                // If the current term is odd, add 2 to the previous term
                number = number + 2;
            }

            printf("%d\n", number);
        }
    } else {
        printf("Invalid input. Please enter a positive integer for the number of terms.\n");
    }

    return 0;
}
