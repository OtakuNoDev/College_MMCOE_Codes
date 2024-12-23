#include <stdio.h>

int main() {
    int i = 1;
    int no;
    int count = 0;

    printf("Enter the NUMBER:-  ");
    scanf("%d", &no);

    while (i <= no) 
    {
        if (no % i == 0) 
            {
              count += 1;
            }
        i++;
    }    

    if (no == 0 || no == 1) 
    {
        printf("0 and 1 are not PRIME NUMBERS\n");
    } 
    
    else if (count > 2) 
    {
        printf("The entered number is NOT PRIME\n");
    } 
    
    else 
    {
        printf("The entered number is PRIME\n");
    }

    return 0;
}
