#include <stdio.h>

int main(){
    int base, height, area=0;
    printf("Give base: ");
    scanf("%d", &base);
    printf("Give height: ");
    scanf("%d", &height);
    area=base*height/2;
    printf("%d\n", area);
}