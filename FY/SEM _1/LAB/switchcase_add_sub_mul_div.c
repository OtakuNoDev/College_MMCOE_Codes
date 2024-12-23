                            // EXPERIMENT - 1

#include <stdio.h>

int main()
{
    char ope;
    int a,b;
    
    printf("Enter the operation: ");
    scanf("%c", &ope);
    
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    switch(ope)
    {
        case '+': 
            printf("ADDITION :- %d \n", a+b);
            break;
        case '-': 
            printf("SUBTRACTION :- %d \n", a-b);
            break;
        case '*': 
            printf("MULTIPLICATION :- %d \n", a*b);
            break;
        case '/': 
            printf("DIVISION :- %d \n", a/b);
            break;
    
        default: 
            printf("Invalid input! Please enter OPERATIONS among +, -, *, /.");
    }

    return 0;
}