#include<stdio.h>
int main()
{
    int i, n;
    printf("Enter the number for which you want its MULTIPLICATION TABLE :- \n");
    scanf("%d", &n);

    for(i=1; i<=10; i++)
    {
        printf(" %d * %d = %d\n", n,i, n*i);
    }

    return 0;
}