/*Write a C code that gets the number of the digits in a given number.*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("The number of digits is: %d\n", (int)log10(n)+1);
    return 0;
}