#include <stdio.h>
#include <ctype.h>

int main() {
    char c;
    int num=0;
    printf("Give a character: ");
    scanf("%c", &c);
    if (islower(c))
    {
        for (char i = 'a'; i <= 'z'; i++)
        {
            num++;
            if (c == i)
            {
                break;
            } 
        }
    }
    
    else
    {
        
       for (char i = 'A'; i <= 'Z'; i++)
        {
            num++;
            if (c == i)
            {
                break;
            } 
        }
    }
    printf("%d", num);
}