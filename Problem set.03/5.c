/*Write a C code containing a function that gets the fibonacci of a given number.
Hint: Fibonacci is defined as :
f(n) = f(n - 1) + F(n - 2), f(0) = 0, f(1) = 1.*/

#include <stdlib.h>
#include <stdio.h>

int fib(int n){
    int fibs[n+1];
    fibs[0] = 0;
    fibs[1] = 1;
    for(int i = 2; i <= n; i++){
        fibs[i] = fibs[i-1] + fibs[i-2];
    }
    return fibs[n];
}

int main(){

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("The fibonacci of %d is: %d\n", n, fib(n));
    return 0;
}