#include<stdio.h>
int main()
{
    int A,B;

    printf("Enter first number :- \n");
    scanf("%d", &A);

    printf("Enter second number :- \n");
    scanf("%d", &B);

    if(A>B)
    {
        printf("A is grater than B \n");
    }

    else{
        printf("B is grater than A \n");
    }

    return 0;

}