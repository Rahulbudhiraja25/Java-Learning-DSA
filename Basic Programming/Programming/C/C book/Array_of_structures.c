#include<stdio.h>
// #include<string.h>
struct employee{
int code;
float salary;
char name[20];
};
int main()
{
    // char temp[50];
    struct employee database[10];
    for(int i=0;i<10;i++){
 printf("Enter the code of %d employee: ",i+1);
 scanf("%d",&database[i].code); 

printf("Enter the salary of %d employee: ",i+1);
 scanf("%f",&database[i].salary); 

printf("Enter the name of %d employee: ",i+1);
fflush(stdin);
  scanf("%s",&database[i].name);
//  strcpy(database[i].name,temp);

    }

for(int z=0;z<10;z++){

 printf("The code of %d employee is %d\n ",z+1,database[z].code);
  

printf("The salary of %d employee is %f\n ",z+1,database[z].salary); 

printf("The name of %d employee is %s\n ",z+1,database[z].name);
  


}
return 0;
}