//C program of creating a function to find factorial..

#include<stdio.h>
#include<conio.h>
int factorial(int num);
int main()
{int numb,facto;
 printf("Enter the number\n");
 scanf("%d",&numb);
 facto=factorial(numb);
 printf("Factorial is %d\n",facto);

return 0;
}
int factorial(int num){
 int i;
 int factorial=1;
 for(i=1;i<=num;i++)
 factorial=factorial*i;
 return(factorial);
}