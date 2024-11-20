/*
Develop program that calculate the sum of numbers from 1 to n using recursion.
*/

#include <stdio.h>

int sumrec(int a)
{
    if(a == 0){
        return 0;
    }
    else
    {
    int sum;
    sum = a + sumrec(a-1);
    return sum;
    }
};


int main()
{
    int x,y,result;
    
    printf("Enter no:- \n");
    scanf("%d", &x);
    result = sumrec(x);
    printf("SUM is:- %d \n",result);
     
  return 0;   
}

/*
OUTPUT:-
Enter no:- 
5
SUM is:- 15 
*/
