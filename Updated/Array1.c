#include<stdio.h>
int main()
{
    // Array for INTEGER
    int I[5] = {1, 2, 3, 4, 5};
    int i;

    for(i = 0; i <= 4; i++)
    {
        printf("%d \n", I[i]);
    }

    // Array for CHARACTER
    char C[5] = {'A', 'B', 'C', 'D', 'E'};
    int c;

    for(c = 0; c <= 4; c++)
    {
        printf("%c \n", C[c]);
    }

    // Array for FLOAT
    float F[5] = {10.05, 20.05, 30.05, 40.05, 50.05};
    int f;

    for(f = 0; f <= 4; f++)
    {
        printf("%.2f \n", F[f]);
    }

    // Array for DOUBLE
    double D[5] = {10.005, 20.005, 30.005, 40.005, 50.005};
    int d;

    for(d = 0; d <= 4; d++)
    {
        printf("%lf \n", D[d]);
    }

    return 0;
}