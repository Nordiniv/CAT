/*Write a code that takes 2 numbers and print the arithmetical, logical and bitwise
operations.*/

#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter 2 numbers: ");
    scanf("%d %d", &a, &b);
    printf("Arithmetical operations: %d + %d = %d\n", a, b, a + b);
    printf("Logical operations: %d && %d = %d\n", a, b, a && b);
    printf("Bitwise operations: %d & %d = %d\n", a, b, a & b);
    return 0;
}