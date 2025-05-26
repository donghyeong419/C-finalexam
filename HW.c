#include <stdio.h>

int main(){
    int a = 10, b = 20;
    int* ptr;

    ptr = &a;
    printf("%d\n", *ptr); // a의 값

    ptr = &b;
    printf("%d\n", *ptr); // b의 값

    return 0;
}
