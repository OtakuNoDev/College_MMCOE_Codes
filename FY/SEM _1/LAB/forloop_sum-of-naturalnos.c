#include<stdio.h>
int main()
{
    int sum = 0, a, b;
    
    printf("enter a NATURAL NUMBER :- \n");
    scanf("%d", &a);

    for(b = 1; b<= a ; b++)
    {
        sum = sum + b;
    }   

    printf("Sum = %d \n", sum);
    return 0;
}