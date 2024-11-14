#include <stdio.h>
#include <string.h>

int main()
{
    int i = 0, vcount = 0, ccount = 0, length = 0, wordCount = 0;
    char str[100];

   
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);  


    length = strlen(str);

    
    int inWord = 0;  

    for(i = 0; i < length; i++)
    {
        
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || 
           str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            vcount++;
        }
        
        else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            ccount++;
        }

        // Check for word boundaries (space or newline)
        if (str[i] == ' ' || str[i] == '\n') {
            inWord = 0;  // End of a word
        } else if (!inWord) {
            wordCount++;  // Start of a new word
            inWord = 1;   // We're inside a word now
        }
    }

    // Output results
    printf("Length of string: %d\n", length - 1);  // Subtract 1 to exclude newline character
    printf("Vowel Count = %d\n", vcount);
    printf("Consonant Count = %d\n", ccount);
    printf("Word Count = %d\n", wordCount);

    return 0;
}
