#include <stdio.h>
 
int main()
{
    float eng, phy, chem, math, plb; 
    float total, average, percentage;
 
    printf("Enter marks of five subjects: :- ");
    scanf("%f%f%f%f%f", &eng, &phy, &chem, &math, &plb);
 
    total = eng + phy + chem + math + plb;
    average = total / 5.0;
    percentage = (total / 500.0) * 100;
 
    printf("Total marks = %f\n", total);
    printf("Average marks = %f\n", average);
    printf("Percentage = %f", percentage);
 
    return 0;
}