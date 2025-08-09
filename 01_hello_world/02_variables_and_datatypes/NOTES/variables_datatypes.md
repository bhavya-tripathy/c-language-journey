
# 02️⃣ Variables and Data Types in C



## 📝 What are Variables?

- Variables are **named memory locations** used to store values in a program.
Each variable has:
Name → identifier you choose (age, marks)
Type → what kind of data it stores (int, float, char, etc.)
Value → the actual data stored
 
 - Think of them like **labeled boxes** where you keep your data.



Example:
int age = 17;
float height = 5.6;
char grade = 'A';


### ✅ Rules for variable names:

* Start with a letter or underscore `_`
* Can contain letters, numbers, and underscores
* No spaces or special characters



## 🔢 Data Types in C

| Data Type | Size (Approx) | Example                    | Description                      |
| --------- | ------------- | -------------------------- | -------------------------------- |
| int       | 4 bytes       | `int age = 18;`            | Whole numbers                    |
| float     | 4 bytes       | `float pi = 3.14;`         | Decimal numbers (less precision) |
| double    | 8 bytes       | `double big = 3.14159265;` | Decimal numbers (high precision) |
| char      | 1 byte        | `char grade = 'A';`        | Single characters                |

📝 *Note: Sizes can vary between systems.*



## 💻 Example 1: variables.c


// variables.c
// Declaring and using variables in C

#include <stdio.h>

int main() {
    int age = 17;
    float height = 5.6;
    char grade = 'A';

    printf("Age: %d years\n", age);
    printf("Height: %.1f feet\n", height);
    printf("Grade: %c\n", grade);

    // Updating variable
    age = 18;
    printf("Updated Age: %d years\n", age);

    return 0;
}


### ✅ What you learn:

* Declaring variables
* Assigning values
* Using `printf()` to display values

| Format Specifier | Used For |
| ---------------- | -------- |
| %d               | int      |
| %f               | float    |
| %c               | char     |

Example code:
#include <stdio.h>

int main() {
    int age;
    float gpa;
    char grade;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your GPA: ");
    scanf("%f", &gpa);

    printf("Enter your grade: ");
    scanf(" %c", &grade); // Space before %c to avoid newline issues

    printf("\nYou entered:\n");
    printf("Age: %d\n", age);
    printf("GPA: %.2f\n", gpa);
    printf("Grade: %c\n", grade);

    return 0;
}


## 💻 Example 2: datatypes.c


// datatypes.c
// Demonstrating data types in C

#include <stdio.h>

int main() {
    int age = 18;
    float pi = 3.14f;
    double big_pi = 3.1415926535;
    char initial = 'B';

    printf("Integer: %d\n", age);
    printf("Float: %f\n", pi);
    printf("Double: %.10lf\n", big_pi); // prints 10 decimal places
    printf("Character: %c\n", initial);

    return 0;
}


### ✅ What you learn:

* `float` vs. `double` precision
* `char` for single characters
* `%lf` for `double` values



REMEMBER: BOOLEAN AND STRING DATA TYPE DOES NOT EXIST IN C LANGUAGE!(it is the oldest language)