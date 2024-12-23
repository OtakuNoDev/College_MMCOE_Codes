/* #include<stdio.h>
int main()
{
     int r,n,rev=0,original;

     printf("Enter a number:- \n");
     scanf("%d",&n);

     original = n;

     for(;n > 0;)
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
*/

#include<stdio.h>
int main()
{
     int i,r=0,n,rev=0,original;

     printf("Enter a number:- \n");
     scanf("%d",&n);

     original = n;

     for(i=n;i > 0;i++)
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