/*Write a C code swap two global variables through a function.*/

#include <stdlib.h>
#include <stdio.h>

int x = 5, y = 10;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){

    printf("Before swap: x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("After swap: x = %d, y = %d\n", x, y);
    return 0;
}