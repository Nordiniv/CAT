/*Write a c code login code but use a function called login.*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int login(char username[], char password[]){
    char username1[] = "admin";
    char password1[] = "123456";
    if(strcmp(username, username1) == 0 && strcmp(password, password1) == 0){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){

    char username[20], password[20];
    printf("Enter your username: ");
    scanf("%s", username);
    printf("Enter your password: ");
    scanf("%s", password);
    if(login(username, password)){
        printf("Welcome %s\n", username);
    }
    else{
        printf("Invalid username or password\n");
    }
    return 0;
}