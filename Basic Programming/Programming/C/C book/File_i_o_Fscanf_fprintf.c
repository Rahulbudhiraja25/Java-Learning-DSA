#include<stdio.h>
int main()
{ 
    int num;
    int num1;
FILE*ptr;
ptr=fopen("sample.txt","r");

fscanf(ptr,"%d",&num);
fscanf(ptr,"%d",&num1);
fclose(ptr);
printf("The value of num 1 is %d & num 2 is %d",num,num1);
return 0;
}