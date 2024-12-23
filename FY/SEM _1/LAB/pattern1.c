#include<stdio.h>

int pattern_star()
{
    int i, j;
    for(i = 1; i <= 4; i++)
    {
        for(j = 1; j<=i; j++)
        {
            printf("*");
        }

        printf("\n");
    }
};

int pattern_nos()
{
    int a, b;
    for(a = 1; a <= 4; a++)
    {
        for(b = 1; b <= a; b++)
        {
            printf("%d", b);
        }

        printf("\n");
    }

};

int main()
{
    
   pattern_star();
   pattern_nos();

    return 0;
}