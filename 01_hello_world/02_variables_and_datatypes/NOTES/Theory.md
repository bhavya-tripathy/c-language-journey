Every C program has this basic structure:


#include <stdio.h>   // Standard Input/Output library

int main() {         // Main function where execution starts
    // Your code here
    return 0;        // Program ends with status 0 (success)
}

1. #include <stdio.h> → lets you use printf and scanf
2. main() → the entry point of the program
3. { ... } → contains the code to be executed
4. ; → every statement must end with a semicolon
5. return 0; → tells the OS the program ran successfully


Example Code: 


#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}