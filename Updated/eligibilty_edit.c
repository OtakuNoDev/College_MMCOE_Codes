#include <stdio.h>

int main() 
{
    int age;
    char nationality;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Are you Indian? (Y or N): ");
    scanf(" %c", &nationality);  // Removed space before 'c'

    // Check if age is 18 or older and nationality is 'Y' or 'N'
    if (age >= 18 && (nationality == 'Y' || nationality == 'N')) 
    {
        printf("You are eligible for voting.\n");
    } 
    else 
    {
        printf("You are not eligible for voting.\n");
    }

    return 0;
}
