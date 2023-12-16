#include<stdio.h>
#include<conio.h>
int power(int a,int b);
int main()
{
int a,b,r;
printf("Enter the number\n");
scanf("%d",&a);
printf("Enter the power of number\n");
scanf("%d",&b);
r=power(a,b);
printf("%d\n",r);
return 0;
}
int power(int a,int b){
   int i,temp=1;
for(i=1;i<=b;i++){

    temp=temp*a;
}
    return(temp);
}