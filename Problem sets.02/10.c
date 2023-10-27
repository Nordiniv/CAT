/*Write a C that asks the user to enter his ID and his password, if the ID is correct the
system will ask the user to enter his password up to 3 times, if he enters the password
right the system welcomes him, if the three times are incorrect, the system prints "No
more tries". The system prints "You are not registered" on every wrong try. (Login
code)*/

#include <stdlib.h>
#include <stdio.h>

int main(){

    int id, pass, c = 0;
    printf("Enter your ID: ");
    scanf("%d", &id);
    if(id == 1234){
        while(c < 3){
            printf("Enter your password: ");
            scanf("%d", &pass);
            if(pass == 7788){
                printf("Welcome!");
                break;
            }
            else{
                printf("You are not registered\n");
            }
            c++;
        }
        if(c == 3){
            printf("No more tries\n");
        }
    }
    else{
        printf("You are not registered\n");
    }
    return 0;
}