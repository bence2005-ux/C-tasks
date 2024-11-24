#include <stdio.h>

int main(){
    int a, b;
    printf("Give the dividend: ");
    scanf("%d", &a);
    printf("Give the divisor: ");
    scanf("%d", &b);
    if(b!=0)
    {
        if(a%b==0)
        {
            printf("%d is divisible by %d\n", a, b);
        }
        else
        {
            printf("%d is not divisible by %d\n", a, b);
        }
    }
    else
    {
        printf("Divison with 0 is undefined");
    }
}