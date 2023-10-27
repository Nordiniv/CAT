/*Write a C code that asks the user to enter his grade and the program will print his rating.
(Excellent, very good,...,etc). %-based system*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    float grade;
    char rating[5][10] = {
    "Fail",
    "Pass",
    "Good",
    "Very Good",
    "Excellent"
};

    printf("Enter your grade: ");
    scanf("%f", &grade);
    printf("Your rating is: %s\n", rating[(int)grade/20 - 1]);
    return 0;
}