#include<stdio.h>
int main()
{
    int P,T,R,SI;

    printf("Enter Principal Amount :- \n");
    scanf("%d", &P);

    printf("Enter Total Amount :- \n");
    scanf("%d", &T);

    printf("Enter Rate of interest :- \n");
    scanf("%d", &R);

    SI = (P * T * R)/100;

    printf("Simple Interest is :- %d \n", SI);

    return 0;
}