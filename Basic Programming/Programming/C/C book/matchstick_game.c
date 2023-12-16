#include<stdio.h>
#include<conio.h>
int main()
{
int m=21,p,c;

while(1)
{
printf("The number of matchstics left are %d\n",m);
printf("Pick up 1,2,3 or 4 matchstics\n");
scanf("%d",&p);
if(p>4||p<1)
continue;
m=m-p;

printf("The number of matchstics left are %d\n",m);

c=5-p;

printf("The number of matchstics computer picked is %d\n",c);

m=m-c;

if(m==1)
{
printf("The number of matchstics left are %d\n",m);
printf("player loses\n");
break;
}
}
return 0;

}