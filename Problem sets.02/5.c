/*Write a C code that asks the user to enter 3 numbers, the program will print the
maximum number of them.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int max, len = 3;
    int num[len];

    printf("Enter number %d: ", 1);
    scanf("%d", &num[0]);
    max = num[0];

    for (size_t i = 1; i < len; i++)
    {
        printf("Enter number %ld: ", i+1);
        scanf("%d", &num[i]);
        max = max < num[i] ? num[i] : max;

    }

    printf("The maximum number is: %d\n", max);
    
    return 0;
}