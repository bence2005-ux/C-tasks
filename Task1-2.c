#include <stdio.h>

int main(){
    double radius, area=0;
    printf("Give the radius of a circle: ");
    scanf("%lf", &radius);
    if(radius<0){
        printf("Negative number given converting to positive.\n");
        radius = radius*-1;
    }
    area = radius*3.14;
    printf("The area of the circle is %g\n", area);
}