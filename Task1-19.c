#include <stdio.h>

int main() {
    int n, sum=0;
    printf("Give a number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if(i%2==0)
        {
            sum+=i;
        }
    }  
    printf("The sum of all even numbers till %d is %d", n, sum);

}