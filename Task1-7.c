#include <stdio.h>

int main(){
    int a, b;
    char op;
    printf("Give a number: ");
    scanf("%d", &a);
    printf("Give another number: ");
    scanf("%d", &b);
    printf("Give the operation: ");
    scanf(" %c", &op);
    if(op=='+')
    {
        a+=b;
        printf("%d\n", a);
    }
    if(op=='-')
    {
        a-=b;
        printf("%d\n", a);
    }
    if(op=='*')
    {
        a*=b;
        printf("%d\n", a);
    }
    if(op=='/')
    {
        a/=b;
        printf("%d\n", a);
    }
}