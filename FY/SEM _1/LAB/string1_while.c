#include <stdio.h>
#include <string.h>

int main()
{
    int i = 0, vcount = 0, ccount = 0, length=0;
    char str[100];

    printf("Enter the string: ");
    scanf("%s", str);

    length = strlen(str);

    while (str[i] != '\0')
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            vcount++;
        }

        else
        {
            ccount++;
        }
        i++;  
    }

      printf("Length of string: %d\n", length);
      printf("Vowel Count = %d \n", vcount);
      printf("Consonant Count = %d \n", ccount);

    return 0;
}
