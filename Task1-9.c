#include <stdio.h>

int main(){
    int a, b;
    printf("Give a number: ");
    scanf("%d", &a);
    printf("Give another number: ");
    scanf("%d", &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("First number: %d and second number: %d\n", a, b);
    
}