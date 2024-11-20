/*
Write a program to store names of 10 cities using array of Pointers. The city names are to be input by user.
*/

#include <stdio.h>
#include <string.h>

#define MAX_CITY_LENGTH 50
#define NUM_CITIES 10


int main() {
    char cities[NUM_CITIES][MAX_CITY_LENGTH]; // 2D Array

    for (int i = 0; i < NUM_CITIES; i++)
    {
        printf("Enter city %d: ", i + 1);
        scanf("%s", cities[i]);
    }

    printf("\nEntered cities:\n");
    
    for (int i = 0; i < NUM_CITIES; i++) 
    {
        printf("%d. %s\n", i + 1, cities[i]);
    }

    return 0;
}

/* 
OUTPUT:-
Enter city 1: pi
Enter city 2: po
Enter city 3: po
Enter city 4: po
Enter city 5: po
Enter city 6: po
Enter city 7: po
Enter city 8: po
Enter city 9: po
Enter city 10: po

Entered cities:
1. pi
2. po
3. po
4. po
5. po
6. po
7. po
8. po
9. po
10. po
