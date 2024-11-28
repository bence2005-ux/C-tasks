#include <stdio.h>
#include <ctype.h>

int main() {
    char c;
    printf("Give a character: ");
    scanf(" %c", &c); 

    if (isalpha(c)) 
    {
        printf("This character is alphabetical.\n");
    }
    else if (isdigit(c)) 
    {
        printf("This character is a digit.\n");
    }
    else 
    {
        printf("This character is a special character.\n");
    }

}
