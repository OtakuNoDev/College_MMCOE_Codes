/*
Write a program to add two numbers using the call by value.
*/

#include <stdio.h>

int add(int a, int b)
{
    int sum;
    sum = a + b;
    return sum;
};


int main()
{
    int x,y,result;
    
    printf("Enter two nos:- \n");
    scanf("%d %d", &x, &y);
    result = add(x,y);
    printf("SUM is:- %d \n",result);
     
  return 0;   
}
/*
OUTPUT:-
Enter two nos:- 
4 6
SUM is:- 10 
*/
