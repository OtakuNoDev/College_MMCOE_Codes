#include<stdio.h>
int main()
{
    int plb, phy, m1, icc, eel, total, check;
    float percentage;

    printf("ENTER THE MARKS OBTAINED IN PHYSICS :- \n");
    scanf("%d", &phy);

    printf("ENTER THE MARKS OBTAINED IN PLB :- \n");
    scanf("%d", &plb);

    printf("ENTER THE MARKS OBTAINED IN MATHS :- \n");
    scanf("%d", &m1);

    printf("ENTER THE MARKS OBTAINED IN ICC :- \n");
    scanf("%d", &icc);

    printf("ENTER THE MARKS OBTAINED IN EEL :-\n");
    scanf("%d", &eel);

    printf("CHOOSE :-\n 1) TOTAL MARKS \n 2) PERCENTAGE \n");
    scanf("%d", &check);

    switch(check)
    {
        case 1: 
            total = phy + plb + m1 + icc + eel;
            printf("TOTAL MARKS SCORED :- %d  \n",total);
            break;

        case 2: 
            percentage = (((phy + plb + m1 + icc + eel) * 100)/500);
            printf("PERCENTAGE SCORED :- %.2f  \n",percentage);
            printf("PERCENTAGE = %.2f", &percentage);
            break;
        
        default: 
            printf("INVALID");
    }

    return 0;
}