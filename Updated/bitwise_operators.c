#include<stdio.h>
int main()
{
    
    unsigned int a = 1, b = 0;
    signed int c = -8, d = 4;

    printf("THE UNSIGNED INTEGRES ARE :- %d and %d \n", a, b);
    printf("THE SIGNED INTEGRES ARE :- %d and %d \n", c, d);


    // & (bitwise AND)
    printf("a = %u, b = %u \n", a, b);
    printf("a & b = %u \n", a & b);

    // |(bitwise OR)
    printf("a|b = %u \n", a | b);

    // ^ (bitwise XOR)
    printf("a^b = %u \n", a ^ b);

    // ~ (bitwise NOT)
    printf("~a = %u \n", a = !a);

     // << (left shift)
    printf("b<<1 = %u \n", b << 1);

    // >> (right shift)
    printf("b>>1 = %u \n", b >> 1);

    return 0;
}