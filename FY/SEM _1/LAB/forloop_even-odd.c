#include<stdio.h>
int main()
{
    int i;

    for(i=2; i<=20; i+=2)
    {
     
        printf("Even numbers - %d \n", i);
    }

    for(i=1; i<=20; i+=2)
    {
     
        printf("Odd numbers - %d \n", i);
    }

    return 0;
}