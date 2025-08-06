#include <stdio.h>

int main() {
    int a, b;
    
    printf("Enter a: ");
    scanf("%d", &a);
    
    printf("Enter b: ");
    scanf("%d", &b);
    
    int sum = a + b;
    printf("The sum is: %d", sum);
        return 0;
}

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


#include <stdio.h>

int main() {
    //USER INPUT + MEMORY SIZES

    int myage;
    float temperature;
    double pi;
    char grade;

    // User input
    printf("Enter your age: ");
    scanf("%d", &myage);

    printf("Enter today's temperature: ");
    scanf("%f", &temperature);

    printf("Enter the value of pi (up to 10 decimals): ");
    scanf("%lf", &pi);

    printf("Enter your grade (single character): ");
    scanf(" %c", &grade); // notice the space before %c

    // Output
    printf("\nYour age is: %d years\n", myage);
printf("Today's temperature: %.1f°C\n", temperature);
printf("Value of pi: %.10lf\n", pi);
printf("Your grade is: %c\n", grade);
  
// Memory sizes
    printf("\nSize of data types on this system:\n");
    printf("int: %zu bytes\n", sizeof(int));    
    printf("float: %zu bytes\n", sizeof(float));
    printf("double: %zu bytes\n", sizeof(double));
    printf("char: %zu byte\n", sizeof(char));
    return 0;
}