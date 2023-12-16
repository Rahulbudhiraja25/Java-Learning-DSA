#include<stdio.h>
#include<conio.h>
int calsum(int a,int c,int d);
int main()
{
int a,b,c,sum;
printf("Enter the value of a,b,c\n");
scanf("%d%d%d",&a,&b,&c);
sum=calsum(a,b,c);
printf("Sum is %d\n",sum);
return 0;
}
int calsum(int a,int c,int d){
int f=a+c+d;
return(f);
}
//in this program
//a,b,c are actual arguments.
// a,c,d are formal aguments