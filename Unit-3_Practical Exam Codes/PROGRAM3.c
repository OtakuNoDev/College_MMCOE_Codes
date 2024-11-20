/*
Develop program that to find the Factorial of a number using 
recursion.
*/

#include<stdio.h>

int fact(int no)
{
    if(no == 0)
    {
        return 1;
    }
    else
    {
        return no * fact(no-1);
    }
};

int main()
{
    int num, result;
    
    printf("Enter a non-negative number:- \n");
    scanf("%d", &num);
    
    if(num<0)
    {
        printf("ERROR! Enter Positive number \n");
    }
    else
    {
        result = fact(num);
        printf("Factorial of %d:- %d", num,result);
    }
}

/*
OUTPUT:-
Enter a non-negative number:- 
6
Factorial of 6:- 720
*/
