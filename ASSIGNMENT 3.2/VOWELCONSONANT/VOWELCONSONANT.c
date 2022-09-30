#include <stdio.h>

int main()
{
    char LETTER;
    
    /* Input week number from user */
    printf("ENTER THE VOWEL OR CONSONANT   :-");
    scanf("%c",&LETTER);
    
    switch(LETTER)
    {
        case'a': 
        case'A': 

            printf("VOWEL");
            break;
        case'e': 
        case'E': 

            printf("VOWEL");
            break;
        case'I': 
        case'i': 

            printf("VOWEL");
            break;
        case'o': 
        case'O': 

            printf("VOWEL");
            break;
        case'U': 
        case'u': 

            printf("VOWEL");
            break;
        
        default: 
            printf("CONSONANT");
    }

    return 0;
}