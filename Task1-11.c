#include <stdio.h>

int main(){
    int a, b, c;
    printf("Give a number: ");
    scanf("%d", &a);
    printf("Give another number: ");
    scanf("%d", &b);
    printf("Give final number: ");
    scanf("%d", &c);
    if(a<=b && a<=c)
    {
        printf("%d is the smallest number.\n", a);
    }
    else if(b<=a && b<=c)
    {
        printf("%d is the smallest number.\n", b);

    }
    else if (c<=a && c<=b)
    {
        printf("%d is the smallest number.\n", c);
    }
       
}