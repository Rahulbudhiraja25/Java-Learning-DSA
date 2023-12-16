#include<stdio.h>
#include<conio.h>
int x10(int);
int main()
{
    int a;
 printf("Enter a number\n");
 scanf("%d",&a);   
printf("The value before function is  %d\n",a);
 x10(a);
printf("The value after function is  %d\n",a);
 
return 0;
} 


int x10(int x){
int c;
c=x*10;
printf("The value in function is %d\n",c);
}
