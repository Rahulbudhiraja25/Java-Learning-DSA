#include<stdio.h>
#include<conio.h>
int x10(int *);
int main()
{
    int a;
 printf("Enter a number\n");
 scanf("%d",&a);   
x10(&a);
return 0;
}int x10(int *x){
int c;
c=*(x)*10;
printf("The value is %d\n",c);
}
