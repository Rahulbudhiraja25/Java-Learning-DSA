#include<stdio.h>
#include<string.h>

struct employee{
int code;
float salary;
char name[10];
};
int main()
{
struct employee e1;
e1.code=2003;
e1.salary=250.56;

strcpy(e1.name, "Rahul");

struct employee e2;
e2.code=2050;
e2.salary=560.56;

strcpy(e2.name, "Budhiraja");


printf("Code of employee 1 is %d\n",e1.code);
printf("Salary of employee 1 is %.2f\n",e1.salary);
printf("Name of employee 1 is %s\n",e1.name);
printf("\n");
printf("Code of employee 2 is %d\n",e2.code);
printf("Salary of employee 2 is %.2f\n",e2.salary);
printf("Name of employee 2 is %s\n",e2.name);

return 0;
}