#include <stdio.h>
#include <ctype.h>

int main() {
    char c;
    printf("Give a character: ");
    scanf("%c", &c);
    if (!(isalpha(c)))
    {
        printf("Neither.\n");
    }
    else if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
    {
        printf("Vowel.\n");
    }
    else
    {
        printf("Consonant.\n");
    }
    
}