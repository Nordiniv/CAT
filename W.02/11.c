/*Write a c code that draws a pyramid of stars with height entered by the user.
(equilateral)*/

#include <stdlib.h>
#include <stdio.h>

int main(){

    int h;
    printf("Enter the height of the pyramid: ");
    scanf("%d", &h);
    for (size_t i = 0; i < h; i++)
    {
        for (size_t j = 0; j < h-i-1; j++)
        {
            printf(" ");
        }
        for (size_t j = 0; j < 2*i+1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}