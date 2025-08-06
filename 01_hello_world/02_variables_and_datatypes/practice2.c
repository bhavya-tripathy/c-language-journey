#include <stdio.h>

int main() {
    // INTEGER DATA TYPE
    int myAge = 18;
    printf("My age is: %d years\n", myAge);

    // FLOAT DATA TYPE
    float temperature = 36.5f;
    printf("Body temperature: %.1f°C\n", temperature);

    // DOUBLE DATA TYPE
    double pi = 3.1415926535;
    printf("Value of pi: %.10lf\n", pi);

    // CHARACTER DATA TYPE
    char grade = 'A';
    printf("Your grade is: %c\n", grade);

    // SIZEOF() OPERATOR
    printf("\nSize of data types on this system:\n");
    printf("int: %zu bytes\n", sizeof(int));
    printf("float: %zu bytes\n", sizeof(float));
    printf("double: %zu bytes\n", sizeof(double));
    printf("char: %zu byte\n", sizeof(char));

    return 0;
}
    
