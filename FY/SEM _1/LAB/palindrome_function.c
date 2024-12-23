#include<stdio.h>

int r=0,n,rev=0,original;

int checkpalindrome()
{
    
     printf("Enter a number:- \n");
     scanf("%d",&n);

     
}

int main()
{
     checkpalindrome();
     
     original = n;

     while(n>0)
     {
        r = n % 10;
        rev = (rev * 10) + r;
        n = n / 10;
     }

     if(original == rev)
     {
        printf("Number is PALINDROME \n");
        
     }

     else
     {
        printf("Number is NOT PALINDROME \n");

     }

   
     return 0;
}