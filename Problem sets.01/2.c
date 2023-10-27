/*Write a C code that will ask the user to enter a value then print it.*/

#include <stdio.h>
int main()
{
  char string[100];
  printf ("Enter your name :");
  scanf ("%s", string);
  printf ("%s \n", string);
}