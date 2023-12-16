#include<stdio.h>
#include<string.h>

struct employee{
int code;
float salary;
char name[10];
};
int main()
{int i=1;
struct employee e1,e2,e3;
            
printf("Enter the code of Ist employee\n");
scanf("%d",&e1.code);
printf("Enter the salary of the Ist employee\n");
scanf("%f",&e1.salary);
printf("Enter the name of the Ist employee\n");
scanf("%s",e1.name);

printf("Enter the code of 2nd employee\n");
scanf("%d",&e2.code);
printf("Enter the salary of the 2nd employee\n");
scanf("%f",&e2.salary);
printf("Enter the name of the 2nd employee\n");
scanf("%s",e2.name);

printf("Enter the code of 3rd employee\n");
scanf("%d",&e3.code);
printf("Enter the salary of the 3rd employee\n");
scanf("%f",&e3.salary);
printf("Enter the name of the 3rd employee\n");
scanf("%s",e3.name);

printf("Code of employee is %d\n",e1.code);
printf("Salary of employee is %f\n",e1.salary);
printf("Name of employee is %s\n",e1.name);

printf("Code of employee is %d\n",e2.code);
printf("Salary of employee is %f\n",e2.salary);
printf("Name of employee is %s\n",e2.name);

printf("Code of employee is %d\n",e3.code);
printf("Salary of employee is %f\n",e3.salary);
printf("Name of employee is %s\n",e3.name);

return 0;
}