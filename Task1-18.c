#include <stdio.h>

int main() {
    int n, temp=0;
    printf("Give a number: ");
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++)
    {
        temp=n*i;
        printf("%d * %d is %d\n", n, i, temp);
    }  

}