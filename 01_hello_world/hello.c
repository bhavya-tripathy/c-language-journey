#include <stdio.h>  /*This is called a preprocessor directive.
It tells the compiler to include the Standard Input/Output library.
You need this to use printf() and scanf().
📚 Think of it like saying:
"Hey, I need to use the I/O tools in my program — please include them."*/

int main() { /* Every C program must have a main() function. It's where your program starts running.
int means it will return an integer (usually 0 = success).
📚 Think of main() as the engine room — the very heart of your program.*/
    
printf("Hello, World!\n"); /*printf is a function that prints text to the screen."Hello, World!" is a string literal — what will be printed.
\n means new line (so the cursor goes to the next line after printing).
📚 Imagine shouting something through a loudspeaker — that's what printf does to your screen. */
   
return 0;
} /* return 0; means the program finished successfully.
The closing brace } ends the main() function.  
In C, every statement ends with a ;

📚 Think of return 0; as saying "All done, everything went well!" to the operating system. */