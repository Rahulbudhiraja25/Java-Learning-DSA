#include<stdio.h>
#include<conio.h>
int sum(int a,int b);
int main()
{
int d,e;
printf("Enter the Ist number\n");
scanf("%d",&d);    

printf("Enter the 2nd number\n");
scanf("%d",&e);    
sum(d,e);
return 0;
}
int sum(int a,int b){
    int result;
    result=a+b;
    printf("%d+%d=%d\n",a,b,result);
    return 0;
}