#include <stdio.h>
int main() {
    int choise;
    printf("MENU:\n"
           "1. Calculate perimeter of a rectangle\n"
           "2. Calculate cube of a number\n"
           "3. Check if a number is positive, negative, or zero\n"
           "Enter your choice (1-3): ");
scanf("%d", &choise);

    switch (choise) {
        case 1: {
            int a, b;
            printf("Enter the length of side a: ");
            scanf("%d", &a);
            printf("Enter the length of side b: ");
            scanf("%d", &b);
            int perimeter = 2 * (a + b);
            printf("The perimeter of the rectangle is: %d\n", perimeter);
            break;
        }
        case 2: {
            int n;
            printf("Enter a number: ");
            scanf("%d", &n);
            int cube = n * n * n;
            printf("The cube of %d is: %d\n", n, cube);
            break;
        }
        case 3: {
            int num;
            printf("Enter a number: ");
            scanf("%d", &num);
            if (num > 0) {
                printf("The number is positive.\n");
            } else if (num < 0) {
                printf("The number is negative.\n");
            } else {
                printf("The number is zero.\n");
            }
            break;
        }
        default:
            printf("Invalid choice. Please select between 1 and 3.\n");
    }

    return 0;
}