//  Write a Program to perform all arithmetic operators such as +, -, *, / and %

// For example,
// Output:

// Addition of 12 and 6 is 18
// Subtraction of 12 and 6 is 6
// Multiplication of 12 and 6 is 72
// Division of 12 and 6 is 2
// Modulo of 12 and 6 is 0

// 12 + 6 = 18
// 12 - 6 = 6
// 12 * 6 = 72
// 12 / 6 = 2
// 12 % 6 = 0
#include <stdio.h>

main()
{
    int a = 12;
    int b = 6;

    printf(" 12+6=%d\n", a + b);
    printf(" 12-6=%d\n", a - b);
    printf(" 12*6=%d\n", a * b);
    printf(" 12/6=%d\n", a / b);
    printf(" 12%%6=%d\n", a % b);
}