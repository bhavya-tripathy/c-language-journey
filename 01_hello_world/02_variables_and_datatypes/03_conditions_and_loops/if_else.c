// I. Conditionals (Decision Making)
//Conditionals allow your program to make decisions and execute different code based on conditions.

//1. if-else statement 
//RUNS CODE ONLY IF A CONDITION IS TRUE
#include <stdio.h>

int main() {
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);

    if (marks >= 90) {
        printf("A grade");
    } else if (marks >= 75) {
        printf("B grade");
    } else {
        printf("C grade");
    }

    return 0;
}
