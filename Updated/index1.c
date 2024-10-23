#include <stdio.h>

int main() {
    char nationality[10];
    int age;
    int isEligible = 0; // Flag for eligibility

    // Ask for nationality
    printf("Enter your nationality: ");
    scanf("%s", nationality);

    // Check if nationality is Indian by checking each character
    if (nationality[0] == 'I') {
        if (nationality[1] == 'n') {
            if (nationality[2] == 'd') {
                if (nationality[3] == 'i') {
                    if (nationality[4] == 'a') {
                        if (nationality[5] == 'n' && nationality[6] == '\0') {
                            isEligible = 1; // Set flag if Indian
                        }
                    }
                }
            }
        }
    }

    // If Indian, ask for age
    if (isEligible) {
        printf("Enter your age: ");
        scanf("%d", &age);

        // Check age for voting eligibility
        if (age >= 18) {
            printf("You are eligible for voting.\n");
        } 
        else 
        {
            printf("You are not eligible for voting.\n");
        }
    } 
    
    else
     {
        printf("You are not eligible for voting.\n");
    }

    return 0;
}
