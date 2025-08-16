#include<stdio.h>
int main() {
    int choice;
    printf("MENU:\n");
printf(" 1. Decimal to Binary\n");
printf(" 2. Decimal to Octal\n");
printf(" 3. Decimal to Hexadecimal\n");
printf(" 4. Binary to Decimal\n");
printf(" 5. Binary to Octal\n");
printf(" 6. Binary to Hexadecimal\n");
printf(" 7. Octal to Decimal\n");
printf(" 8. Octal to Binary\n");
printf(" 9. Octal to Hexadecimal\n");
printf("10. Hexadecimal to Decimal\n");
printf("11. Hexadecimal to Binary\n");
printf("12. Hexadecimal to Octal\n");
printf("Enter your choice (1–12): ");
scanf("%d", &choice);
switch (choice) {
    case 1: {
        int decimal, binary = 0, base = 1, remainder;
        printf("Enter a decimal number: ");
        scanf("%d", &decimal);
        while (decimal > 0) {
            remainder = decimal % 2;
            binary = binary + remainder * base;
            decimal = decimal / 2;
            base = base * 10;
        }
        printf("Binary equivalent: %d\n", binary);
        break;
    }

    case 2: {
        int decimal, octal = 0, base = 1, remainder;
        printf("Enter a decimal number: ");
        scanf("%d", &decimal);
        while (decimal > 0) {
            remainder = decimal % 8;
            octal = octal + remainder * base;
            decimal = decimal / 8;
            base = base * 10;
        }
        printf("Octal equivalent: %d\n", octal);
        break;
    }
    case 3: {
        int decimal;
        printf("Enter a decimal number: ");
        scanf("%d", &decimal);
        printf("Hexadecimal equivalent: %X\n", decimal);
        break;
    }

    case 4: {
        int binary,decimal = 0, base = 1, remainder;
        printf("Enter a binary number: ");
        scanf("%d", &binary);
        while (binary > 0) {
            remainder = binary % 10;
            decimal = decimal + remainder * base;
            binary = binary / 10;
            base = base * 2;
        }
        printf("Decimal equivalent: %d\n", decimal);
        break;
    }
    case 5: {
        int binary, decimal = 0, base = 1, remainder;
        printf("Enter a binary number: ");
        scanf("%d", &binary);
        while (binary > 0) {
            remainder = binary % 10;
            decimal = decimal + remainder * base;
            binary = binary / 10;
            base = base * 2;
        }
        int octal = 0, octalBase = 1;
        while (decimal > 0) {
            remainder = decimal % 8;
            octal = octal + remainder * octalBase;
            decimal = decimal / 8;
            octalBase = octalBase * 10;
        }
        printf("Octal equivalent: %d\n", octal);
        break;
    }

    case 6: {
        int binary, decimal = 0, base = 1, remainder;
        printf("enter a binary number: ");
        scanf("%d", &binary);
        while (binary > 0) {
            remainder = binary % 10;
            decimal = decimal + remainder * base;
            binary = binary / 10;
            base = base * 2;
        }
        printf("Hexadecimal equivalent: %X\n", decimal);
    }



    return 0;
}
