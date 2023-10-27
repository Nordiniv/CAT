/*Write a C code to calculate employee salary in a week based on his working hours, hour
rate is 50.
The program will ask the user to enter the working hours, then it will print his salary.
But if the working hours are less than 40 hours, a 10% deduction will be applied.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    float wh;
    int rate = 50;
    printf("Enter the working hours: ");
    scanf("%f", &wh);
    printf("The salary is: %.2f \n", wh > 40 ? wh * rate : wh * rate * 0.9);

    return 0;

}