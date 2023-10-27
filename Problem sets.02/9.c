/*Write a C to calculate the factorial of an integer entered by the user using a while loop.*/

#include <stdlib.h>
#include <stdio.h>

int main(){

    int x, c = 0;
    printf("Enter a number: ");
    scanf("%d", &x);
    unsigned long long fact = 1;
    while(c < x){
        fact *= (c+1);
        c++;
    }

    printf("%d! = %llu \n", x, fact);
    return 0;
}