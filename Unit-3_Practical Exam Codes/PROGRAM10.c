/*
Write a program in C to store n elements in an array and print the elements using a pointer.

*/

#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    printf("The elements are:\n");
    for (i = 0; i < n; i++) 
    {
        printf("%d ", *(arr + i)); // Using pointer notation
    }

    printf("\n");

    return 0;
}

/* 
OUTPUT:-
Enter the number of elements: 3
Enter the elements:
1 2 3
The elements are:
1 2 3 
*/
