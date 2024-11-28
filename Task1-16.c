#include <stdio.h>
#include <ctype.h>

int main() {
    char c;
    printf("Give a character: ");
    scanf(" %c", &c); 

    if (islower(c)) 
    {
        printf("Lowercase.\n");
    }
    else 
    {
        printf("Uppercase.\n");
    }
    

}