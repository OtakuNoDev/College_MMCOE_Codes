/*
Write a ‘C’ program to accept two numbers. Write a function add( ) to display addition of entered number. Write a function multiply( ) to display multiplication of entered number.
*/

#include<stdio.h>
int no1,no2,sum,product;

int add()
{
    printf("Enter 2 nos:- \n");
    scanf("%d %d", &no1,&no2);
    sum = no1 + no2;
    printf("Sum = %d ", sum);
};

int multi()
{
    //printf("Enter 2 nos:- \n");
    //scanf("%d %d", &no1,&no2);
    product = no1 * no2;
    printf("Product = %d ", product);
};

int main()
{
    add();
    printf("\n");
    multi();
    return 0;
}

/*
OUTPUT:-
Enter 2 nos:- 
12 12
Sum = 24 
Product = 144 
*/
