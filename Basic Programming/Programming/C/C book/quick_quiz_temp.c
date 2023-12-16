#include<stdio.h>
#include<string.h>

struct employee{
int code;
float salary;
char name[10];
};
int main()
{int i=1;
struct employee e1;
    while(i<=3){
        
printf("Enter the code of employee\n");
scanf("%d",&e1.code);
printf("Enter the salary of the employee\n");
scanf("%f",&e1.salary);
printf("Enter the name of the employee\n");
scanf("%s",&e1.name);
i++;
    }
printf("Code of employee is %d\n",e1.code);
printf("Salary of employee is %.2f\n",e1.salary);
printf("Name of employee is %s\n",e1.name);

return 0;
}