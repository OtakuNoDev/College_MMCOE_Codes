/*
Write a program in C to add numbers using call by reference.
*/

#include <stdio.h>

int add(int *a, int *b)
{
    int sum;
    sum = *a + *b;
    return sum;
};


int main()
{
    int x,y,result;
    
    printf("Enter two nos:- \n");
    scanf("%d %d", &x, &y);
    result = add(&x,&y);
    printf("SUM is:- %d \n",result);
     
  return 0;   
}

/*
OUTPUT:-
Enter two nos:- 
1 3
SUM is:- 4 
*/
