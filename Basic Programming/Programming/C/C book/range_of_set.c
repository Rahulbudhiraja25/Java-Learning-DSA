#include<stdio.h>
#include<conio.h>
int main()
{
int a,b;
printf("Enter first number \n");
scanf("%d",&a);

printf("Enter Last number \n");
scanf("%d",&b);

if(a<b){
int c=b-a;
while(a<=b)
{
printf("%d\n",a);
a++;
}

printf("Range = %d",c);
}
else
printf("Wrong Input!!");
return 0;
}