/*Solve these examples in a paper and confirm that your answers are correct by writing a
code printing the result. (x = 7, y = 4), (x | y), (x & y), (x ^ y), (x << 1), (x >> 2).*/

#include <stdio.h>

int main(){
    int x = 7, y = 4;
    int ops[] = {x | y, x & y, x ^ y, x << 1, x >> 2};
    char* op_names[] = {"x | y", "x & y", "x ^ y", "x << 1", "x >> 2"};
    printf("x = %d, y = %d\n", x, y);
    for (int i = 0; i < 5; i++) {
        printf("%s = %d\n", op_names[i], ops[i]);
    }
    return 0;
}