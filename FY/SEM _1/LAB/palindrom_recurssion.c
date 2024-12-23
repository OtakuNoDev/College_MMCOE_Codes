#include<stdio.h>
int r=0,n,rev=0,original;
int checkpalindrome(int rev, int n);

int main()
{
     

     printf("Enter a number:- \n");
     scanf("%d",&n);

     original = n;
     int revR = checkpalindrome(n,0);

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