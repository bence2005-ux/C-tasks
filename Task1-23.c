#include <stdio.h>

int main(){
    int l, w, per=0;
    printf("Give length: ");
    scanf("%d", &l);
    printf("Give width: ");
    scanf("%d", &w);
    per=2*(l+w);
    printf("%d\n", per);
}