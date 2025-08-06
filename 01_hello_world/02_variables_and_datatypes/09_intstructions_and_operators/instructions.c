// an intruction is a statement that tells the program to perform a specific action.
// 1. type declaration instruction
#include <stdio.h>
int main() {
    // Declare an integer variable
    int a = 10; // This is a declaration instruction
    int b = a;
    int c = b * 6;
    int d = 1,e;
 
 //invalid:
    int oldage = 22;
    int years = 5; // This is a declaration instruction
    int newage = oldage + years; //* This is an invalid instruction because 'years' is not defined, we later defined years before performing an operation as the compiler reads the program line by line to fix the error  *//
   
    int x, y, z;
    x = y = z = 4 ; // This is a valid instruction, assigning 4 to x, y, and z
    
    //2. Arthematic instructions


    return 0;
}