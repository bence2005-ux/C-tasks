#include <stdio.h>
#include <string.h>

int main(){
    char str[50];
    int count=0;
    printf("Give a word: ");
    scanf("%s", str);

    int len_str = strlen(str);

    for (int i = 0; i < len_str; i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
        {
            count++;
        }
    }
    printf("Amount of vowels: %d\n", count);
    
    
}