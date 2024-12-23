#include<stdio.h>
int main()
{
    int i;
    int no;
    int count = 0;

    printf("Enter the NUMBER:- ");
    scanf("%d", &no);

    for(i=1; i<=no; i++)
    {
        if(no % i == 0)
        {
            count += 1;
        }
    }    

        if(no == 0 || no == 1)
        {
            printf("0 and 1 are not PRIME NUMBERS");
        }

        else if(count > 2)
        {
            printf("The entered number is NOT PRIME");
        }

        else
        {
            printf("The entered number is PRIME");
        }

    
}