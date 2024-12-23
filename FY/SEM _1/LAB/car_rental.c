#include <stdio.h>

#define MAX_CARS 3

struct Car {
    int carID;
    char car_model[50];
    float rental_rate;
};

int main() {
    struct Car cars[MAX_CARS];
    int rentaldays, selectedcarID, carFound = 0;
    float totalCost;

    printf("--------CAR RENTAL SYSTEM-------- \n");

    // INPUTTING THE CAR DETAILS
    for (int i = 0; i < MAX_CARS; i++) {
        printf("--------ENTER DETAILS OF CAR:- %d-------- \n", i + 1);

        printf("ENTER CAR_ID- \n");
        scanf("%d", &cars[i].carID);

        printf("ENTER MODEL-  \n");
        scanf("%s", cars[i].car_model);

        printf("ENTER RENTAL RATE- \n");
        scanf("%f", &cars[i].rental_rate);
    }

    // DISPLAYING AVAILABLE CARS
    printf("\nAVAILABLE CARS:- \n");
    printf("CARID\t\tMODEL\t\tRENTAL_RATE\n");

    for (int i = 0; i < MAX_CARS; i++) {
        printf("%d\t\t%s\t\t%.2f\n", cars[i].carID, cars[i].car_model, cars[i].rental_rate);
    }

    printf("ENTER THE CAR YOU WANT TO SELECT:- \n");
    scanf("%d", &selectedcarID);

    printf("ENTER THE NUMBER OF DAYS YOU WANT TO TAKE THE CAR:- \n");
    scanf("%d", &rentaldays);

    for (int i = 0; i < MAX_CARS; i++) {
        if (cars[i].carID == selectedcarID) {
            carFound = 1;
            totalCost = rentaldays * cars[i].rental_rate;

            printf("----------RENTAL SUMMARY---------- \n");

            printf("CAR MODEL:- %s \n", cars[i].car_model);

            printf("RENTAL DAYS:- %d \n", rentaldays);

            printf("TOTAL COST:- %.2f \n", totalCost);

            break;
        }
    }

    if (!carFound) {
        printf("ERROR! CAR ID NOT FOUND.\n");
    }
    return 0;
}
