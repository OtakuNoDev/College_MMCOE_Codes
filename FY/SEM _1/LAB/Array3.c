#include<stdio.h>
int main()
{
    int n, sum=0, i;
    int A[5];


    printf("Enter the ARRAY elements:- ");
    
    for(i=0;i<5;i++)
    {
        scanf("%d", &A[i]);
    }

    for(i=0;i<5;i++)
    {
        sum = sum + A[i];
    }

    printf("SUM:- \n", sum);
}