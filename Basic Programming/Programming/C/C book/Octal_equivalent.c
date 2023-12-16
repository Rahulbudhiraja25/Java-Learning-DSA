#include<stdio.h>
#include<conio.h>
int main()
{int a,d1,d2,d3,d4,b;

printf("Enter the value of a \n");
scanf("%d",&a);


while(a!=0)
{
a=a/8;
if(a==0){

b=a%8;

d4=b%10;
b=b/10;
                          //incomplete
d3=b%10;
b=b/10;

d2=b%10;
b=b/10;

d1=b%10;


}
}

printf("%d%d%d%d",d4,d3,d2,d1);
return 0;
}