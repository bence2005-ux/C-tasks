#include <stdio.h>

int main(){
    int principle, rate, time, si=0;
    printf("Give principle: ");
    scanf("%d", &principle);
    printf("Give rate: ");
    scanf("%d", &rate);
    printf("Give time: ");
    scanf("%d", &time);

    si = principle*rate*time/100;
    printf("Simple interest rate is: %d\n", si);
    }