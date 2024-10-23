#include <stdio.h>

int main()
{
    char vowels;
    
    printf("Enter vowels: ");
    scanf("%c", &vowels);
    
    switch(vowels)
    {
        case 'a': 
            printf("IT IS A VARIABLE");
            break;
        case 'e': 
            printf("IT IS A VARIABLE");
            break;
        case 'i': 
            printf("IT IS A VARIABLE");
            break;
        case 'o': 
            printf("IT IS A VARIABLE");
            break;
        case 'u': 
            printf("IT IS A VARIABLE");
            break;
        
        default: 
            printf("IT IS A CONSONANT");
    }

    return 0;
}