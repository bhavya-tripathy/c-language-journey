// 📄 datatypes.c
// ➡️ Learn about basic data types in C

#include <stdio.h>

int main() {
    // 🧠 Integer data type
    int myAge = 18;
    printf("My age is: %d years\n", myAge);

    // 🧠 Float data type (single precision decimal)
    float temperature = 36.5f;
    printf("Body temperature: %.1f°C\n", temperature);

    // 🧠 Double data type (double precision decimal)
    double pi = 3.1415926535;
    printf("Value of pi: %.10lf\n", pi);

    // 🧠 Character data type
    char grade = 'A';
    printf("Your grade is: %c\n", grade);

    // 🧠 sizeof() operator - shows memory (in bytes) of each type
    printf("\n👉 Size of data types on this system:\n");
    printf("int: %zu bytes\n", sizeof(int));
    printf("float: %zu bytes\n", sizeof(float));
    printf("double: %zu bytes\n", sizeof(double));
    printf("char: %zu byte\n", sizeof(char));

    return 0;
}
// %d is used for integers
// %.1f is used for float with 1 decimal place  
// %.10lf is used for double with 10 decimal places
// %c is used for characters
// these are called format specifiers

// datatypes.c
// Basic data types and input in C

#include <stdio.h>

int main() {
    int myAge;
    float temperature;
    double pi;
    char grade;

    // 🌟 User input
    printf("Enter your age: ");
    scanf("%d", &myAge);

    printf("Enter today's temperature: ");
    scanf("%f", &temperature);

    printf("Enter the value of pi (up to 10 decimals): ");
    scanf("%lf", &pi);

    printf("Enter your grade (single character): ");
    scanf(" %c", &grade); // notice the space before %c

    // 🌟 Output
    printf("\nYou entered:\n");
    printf("Age: %d\n", myAge);
    printf("Temperature: %.1f°C\n", temperature);
    printf("Pi: %.10lf\n", pi);
    printf("Grade: %c\n", grade);

    // 🌟 Memory sizes
    printf("\nSize of int: %zu bytes\n", sizeof(int));
    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of double: %zu bytes\n", sizeof(double));
    printf("Size of char: %zu byte\n", sizeof(char));

    return 0;
}
// This code demonstrates basic data types in C, including integer, float, double, and character.
/* scanf("%d", &myAge); → & gets the address of variable (C uses pass by address for input)

For char, we use " %c" with a space → avoids newline issues left by previous scanfs

printf() shows output

sizeof() shows memory size*/
