/*
Write a program to input employee number and basic salary for an employee.
Define a user defined function calculate () to calculate & display gross salary with following conditions : da = 10% of basic salary
hra = 8.3% of basic salary & gross = basic sal. + da + hra
*/

#include<stdio.h>

int eno,bassalary;
float da,hra,grsalary;

void calculate()
{
    da = (10 * bassalary)/100;
    hra = (8.3 * bassalary)/100;
    grsalary = bassalary + da + hra;
    
    printf("Employee ID:- %d \n",eno);
    printf("Enter the BASE Salary:- %d \n",bassalary);
    printf("Enter the GROSS Salary:- %.2f \n",grsalary);
};

int main()
{
    printf("Enter the Employee ID:- \n");
    scanf("%d", &eno);
    
    printf("Enter your BASIC SALARY:- \n");
    scanf("%d", &bassalary);
    
    calculate();
    
    return 0;
}

/*
OUTPUT:-
Enter the Employee ID:- 
345
Enter your BASIC SALARY:- 
1000
Employee ID:- 345 
Enter the BASE Salary:- 1000 
Enter the GROSS Salary:- 1183.00 
*/
