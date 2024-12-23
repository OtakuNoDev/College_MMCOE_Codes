#include <stdio.h>

int main() {
    int pass;
    int user;

        printf("\nInput the PASSWORD (numeric characters only): ");
        scanf("%d", &pass); 

        switch (pass)
         {
            case 1234:
                        printf("Correct password\n"); 
                        break;
            default:
                        printf("Wrong password, try another\n"); 
                        break;
        }

        printf("\nInput the USER-ID (numeric characters only): ");
        scanf("%d", &pass); 

        switch (pass)
         {
            case 4321:
                        printf("Correct userid\n"); 
                        break;
            default:
                        printf("Wrong userid, try another\n"); 
                        break;
        }
    }

