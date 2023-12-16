#include<stdio.h>
#include<conio.h>
int fact(int a);
int main()
{
int num;
printf("Enter a number\n");
scanf("%d",&num);
int factt=fact(num);
printf("factorial of %d is %d\n",num,factt);

return 0;
}int fact(int a){
int c;
if(a==1||a==0)
return 1;
else
c=a*fact(a-1);
return c;
}
