#include<stdio.h>
struct emplayee
{
    int id,salary;
} e1,e2;
int main()
{
    
    e1.id=1001;
    e2.id=1002;
    e1.salary=50000;
    e2.salary=10000;
    printf("%d",e1.id);
printf("%d",e1.salary);
printf("%d",e2.id);
printf("%d",e2.salary);
return 0;
}