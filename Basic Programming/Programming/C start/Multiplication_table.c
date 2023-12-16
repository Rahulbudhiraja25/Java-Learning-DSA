#include<stdio.h>
int main()
{
FILE *ptr;
ptr=fopen("Table.txt","w");
int a;
printf("Enter the number of which you want to print the table\n");
scanf("%d",&a);
// fprintf("Table of %d is :\n\n",a);
for(int i=1;i<=10;i++){

fprintf(ptr,"%d X %d = %d\n",a,i,a*i);

}
fclose(ptr);
printf("Successfully genrated table of %d to table.txt\n",a);
return 0;
}