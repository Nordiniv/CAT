/*Write a program that asks the user to enter a dollars and cents amount, then display the
amount with 5% tax added:
INPUT: Enter an amount: 100.00
OUTPUT: With tax added : $ 105.00*/

#include <stdio.h>

void main()
{
    float amm;
    printf("Enter an amount: ");
    scanf("%f", &amm);
    getchar();
    printf("With tax added: $%.2f\n", amm * 1.05);
}