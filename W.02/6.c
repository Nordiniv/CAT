/*Write a C code that asks the user to enter the result of 3 x 4, In case the user entered the
correct answer the program will print "Thanks", otherwise the program will print "Try
again" until the user enters the correct answer.*/

#include <stdlib.h>
#include <stdio.h>

int main(){
    printf("What is 3 x 4? ");
    int x;
    scanf("%d", &x);
    while( x != 12){
    printf("Try again\n");
    scanf("%d", &x);
}
    printf("Thanks\n");
    return 0;
}