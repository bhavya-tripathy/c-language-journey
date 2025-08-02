// variables.c
// Understanding variable declaration and initialization

#include <stdio.h>

int main() {
    int age = 17;           // Integer variable
    float height = 5.7;     // Floating point variable
    char grade = 'A';       // Character variable

    // Print all variables
    printf("Age: %d\n", age);
    printf("Height: %.1f\n", height);
    printf("Grade: %c\n", grade);

    return 0;

}
/* The code above demonstrates how to declare and initialize variables in C.
- `int age = 17;` declares an integer variable named `age` and initializes it with the value 17.
- `float height = 5.7;` declares a floating-point variable named `height` and initializes it with the value 5.7.
- `char grade = 'A';` declares a character variable named `grade` and initializes it with the character 'A'.
- The `printf` function is used to print the values of these variables to the console. */