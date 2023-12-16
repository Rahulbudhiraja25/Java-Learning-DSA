#include<stdio.h>
#include<string.h>
struct employee{
int code;
float salary;
char name[20];
};
int main()
{
    // char temp[50];
    struct employee rahul = {202,365.5,"Rahul"};
    
 printf("The code of employee is: %d\n",rahul.code);
 printf("The salary of employee is: %f\n",rahul.salary);
 printf("The name of employee is: %s\n",rahul.name);
 
return 0;
}