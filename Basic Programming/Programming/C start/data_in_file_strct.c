#include<stdio.h>
struct employee{
char name[50];
int salary;
int code;
};
int main()
{
struct employee database[5];
for(int i=0;i<5;i++){
printf("Enter the name of %d employee\n",i+1);
scanf("%s",&database[i].name);

printf("Enter the salary of %d employee\n",i+1);
scanf("%d",&database[i].salary);

printf("Enter the code of %d employee\n",i+1);
scanf("%d",&database[i].code);
}
FILE *ptr;

ptr=fopen("name.txt","w");
for(int j=0;j<5;j++){
fprintf(ptr,"%s,%d,%d\n",database[j].name,database[j].salary,database[j].code);

}
return 0;
}