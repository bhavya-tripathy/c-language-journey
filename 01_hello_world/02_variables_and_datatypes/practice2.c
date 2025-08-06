
// write a program to calculate the area of a square
#include <stdio.h>
int main() {
    int side;
    
    printf("Enter the length of the side of the square: ");
    scanf("%d", &side);
    
    int area = side * side;
    printf("The area of the square is: %d", area);
    
    return 0;
}

// write a program to calculate are of a circle
#include <stdio.h>
int main() {
    double radius;
    
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);
    
    double area = 3.141592653589793 * radius * radius; // Using a more precise value for pi
    printf("The area of the circle is: %.2lf\n", area);
    
    return 0;
}


// write a a program to calculate the perimeter of  a rectangle. take sides a and b from the user
#include <stdio.h>
int main() {
    int a, b;
    
    printf("Enter the length of side a: ");
    scanf("%d", &a);
    
    printf("Enter the length of side b: ");
    scanf("%d", &b);
    
    int perimeter = 2 * (a + b);
    printf("The perimeter of the rectangle is: %d\n", perimeter);
    
    return 0;
}

// take a number n from user and output its cubes (n*n*n)
#include <stdio.h>
int main() {
    int n;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    int cube = n * n * n;
    printf("The cube of %d is: %d\n", n, cube);
    
    return 0;
}