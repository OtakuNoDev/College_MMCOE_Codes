#include<stdio.h>
int main()
{
    int A,B,C;

    printf("Enter first number :- \n");
    scanf("%d", &A);

    printf("Enter second number :- \n");
    scanf("%d", &B);

    printf("Enter third number :- \n");
    scanf("%d", &C);

    if (A >= B && A >= C)
    {
    printf("%d is the largest number.", A);
    }

    else if (B >= A && B >= C)
    {
        printf("%d is the largest number.", B);
    }

    else
    {
        printf("%d is the largest number.", C);
    }

    return 0;

}