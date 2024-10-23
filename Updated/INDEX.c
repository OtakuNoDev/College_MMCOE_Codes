#include<stdio.h>
int main()
{
    int sub1, sub2, sub3;
    float percentage, average, total;

    printf("Enter marks if 3 subjects - \n");
    scanf("%d%d%d",&sub1,&sub2,&sub3);

    total = sub1 + sub2 + sub3;
    average = total / 3;
    percentage = (total/300)*100;

    printf("Total marks = %f \n", total);
    printf("Aggregate Marks = %f \n", average);
    printf("Percentage = %f \n", percentage);

    return 0;
}