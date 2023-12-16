#include<stdio.h>
#include<conio.h>
void cal(int*,int *);
int main()
{
int sum,avg;
cal(&sum,&avg);
printf("sum=%d,avg=%d",sum,avg);
return 0;
}void cal(int *sum,int *avg){
  int  a,b,c,d,e;
printf("Enter 5 numbers\n");
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
*sum=a+b+c+d+e;
*avg=*sum/5;
}