#include<stdio.h>
int main()
{char a[50],c[50];
int b,d;
printf("Enter the name of e1\n");
scanf("%s",&a);

printf("Enter the salary of e1\n");
scanf("%d",&b);

printf("Enter the name of e2\n");
scanf("%s",&c);

printf("Enter the salary of e2\n");
scanf("%d",&d);

FILE *ptr;

ptr=fopen("name.txt","w");

fprintf(ptr,"%s ,%d\n%s,%d",a,b,c,d);
fclose(ptr);
return 0;
}