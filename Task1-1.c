#include <stdio.h>

int main(){
    int a, b, sum=0;
    printf("Give a number: ");
    scanf("%d", &a);
    printf("Give another number: ");
    scanf("%d", &b);
    sum = a + b;
    printf("The sum of the 2 numbers give is: %d\n", sum);
}