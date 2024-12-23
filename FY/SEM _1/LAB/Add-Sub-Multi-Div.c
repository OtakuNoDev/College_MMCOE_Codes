#include<stdio.h>
int Sum()
{
    int num1,num2,sum;

    printf("Enter 1st no. \n");
    scanf("%d", &num1);

    printf("Enter 2nd no. \n");
    scanf("%d", &num2);

    sum = num1 + num2;

    printf("Sum = %d \n", sum);
}

int Sub()
{
    int num1,num2,sub;

    printf("Enter 1st no. \n");
    scanf("%d", &num1);

    printf("Enter 2nd no. \n");
    scanf("%d", &num2);

    sub = num1 - num2;

    printf("Sub = %d \n", sub);
}

int Multi()
{
    int num1,num2,Multi;

    printf("Enter 1st no. \n");
    scanf("%d", &num1);

    printf("Enter 2nd no. \n");
    scanf("%d", &num2);

    Multi = num1 * num2;

    printf("Multi = %d \n", Multi);
}

int Div()
{
    int num1,num2,Div;

    printf("Enter 1st no. \n");
    scanf("%d", &num1);

    printf("Enter 2nd no. \n");
    scanf("%d", &num2);

    Div = num1 / num2;

    printf("Div = %d \n", Div);
}

int main()
{
    Sum();
    Sub();
    Multi();
    Div();

    return 0;

}