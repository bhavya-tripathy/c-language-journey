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
