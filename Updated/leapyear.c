#include<stdio.h>
int main()
{
    int year;

    printf("Enter the YEAR:- \n");
    scanf("%d", &year);

    if(year % 400 == 0)
    {
        printf("The Year is LEAP YEAR");
    }   

    else if(year % 100 == 0)
    {
        printf("The Year is NOT LEAP YEAR");
    }

    else if(year % 4 == 0)
    {
        printf("The Year is LEAP YEAR");
    }

    else
    {
        printf("The Year is NOT LEAP YEAR");
    }

    return 0;
}