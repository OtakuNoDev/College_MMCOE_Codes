#include<stdio.h>
int main()
{
    int no1;
    int no2;
    int temp;

    printf("Enter the first no1 =  \n");
    scanf("%d", &no1);

    printf("Enter the second no2 =  \n");
    scanf("%d", &no2);

    temp = no1;
    no1 = no2;
    no2 = temp;

    printf("no1 after swapping :- %d\n", no1);
    printf("no2 after swapping :- %d\n", no2);

    return 0;
}