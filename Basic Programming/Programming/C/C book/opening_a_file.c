#include<stdio.h>
int main()
{
FILE *ptr;
int num,num2;
ptr=fopen("sample.txt","r");

fscanf(ptr,"%d %d",&num,&num2);
fclose(ptr);
printf("The value of num is %d ",num);
printf("The value of num is %d ",num2);
return 0;
}



