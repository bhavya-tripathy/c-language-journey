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
