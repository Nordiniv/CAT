/*Write a C code that asks the user to enter his ID and then the program will print his
name.
Available IDs are: (1234 -> Harry), (5678 -> Ron), (1145 -> Hermione)
Any other number, the program will print "Wrong ID".*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int id;
    printf("Enter your ID: ");
    scanf("%d", &id);
    switch(id){
        case 1234:
            printf("Harry\n");
            break;
        case 5678:
            printf("Ron\n");
            break;
        case 1145:
            printf("Hermione\n");
            break;
        default:
            printf("Wrong ID\n");
    }
    return 0;
}