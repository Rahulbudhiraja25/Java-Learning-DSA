#include<stdio.h>
#include<conio.h>
int main(){
float salary;
float da,ra,gross_salary;
printf("Enter the basic salary of ramesh\n");
scanf("%f",&salary);
da=0.4*salary;
ra=0.2*salary;
gross_salary=salary+da+ra;
printf("The da of Ramesh is %f\n",da);
printf("The ra of Ramesh is %f\n",ra);
printf("The gross salary of Ramesh is %f\n",gross_salary);
return 0;
}