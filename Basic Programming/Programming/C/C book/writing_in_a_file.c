#include<stdio.h>
int main()
{
int a=506;
FILE*ptr;
ptr=fopen("New.txt","w");
fprintf(ptr,"The number is %d\n",a);
fprintf(ptr,"Thanks for using fprintf\n");
fclose(ptr);
return 0;
}