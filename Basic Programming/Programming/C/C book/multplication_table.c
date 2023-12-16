#include<stdio.h>
#include<conio.h>
int main()
{
int num,tab;


printf("Enter the number\n");
scanf("%d",&num);

for(tab=1;tab<=10;tab++)
{
int m=num*tab;
printf("%d*%d=%d\n",num,tab,m);


}
return 0;
}