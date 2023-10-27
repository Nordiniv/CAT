/*Write a code that scans 3 numbers from the user and prints them in reversed order.*/
#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("The numbers in reversed order are: %d %d %d \n", c, b, a);
    return 0;
}