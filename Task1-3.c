#include <stdio.h>

int main(){
    double a, fract=5.0/9.0;
    printf("Give degree in Fahrenheit: ");
    scanf("%lf", &a);
    a = (a-32)*fract;
    printf("This degree in Celsisus is: %g\n", a);

}