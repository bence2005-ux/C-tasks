#include <stdio.h>

int main(){
    int a, sum=0;
    printf("Give a number: ");
    scanf("%d", &a);
    for (int i = 0; i <= a; i++)
    {
        sum= sum+i;
    }
    printf("The sum of first %d numbers: %d\n", a, sum);
}