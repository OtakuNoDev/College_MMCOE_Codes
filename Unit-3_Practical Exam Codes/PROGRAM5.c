/*
Write a program in C to swap numbers using call by reference
*/

#include <stdio.h>

void swap(int *a, int *b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
}


int main()
{
    int x,y;
    
    printf("Enter two nos:- \n");
    scanf("%d %d", &x, &y);
     printf("BEFORE SWAPPING:- %d %d \n", x,y);
     swap(&x,&y);
     printf("AFTER SWAPPING:- %d %d \n", x,y);
  return 0;   
}

/*
OUTPUT:-
Enter two nos:- 
2 4
BEFORE SWAPPING:- 2 4 
AFTER SWAPPING:- 4 2 
*/
