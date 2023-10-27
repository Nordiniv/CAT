/*Write C code to read 10 numbers from the user and find their summation and average.*/

#include <stdlib.h>
#include <stdio.h>

int main(){
    int in[10];
    int sum = 0;
    for(int i = 0; i < 10; i++){
        printf("Enter number %d: ", i+1);
        scanf("%d", &in[i]);
        sum += in[i];
    }
    printf("Sum = %d\n", sum);
    printf("Average = %f\n", (float)sum/10);
    return 0;
}