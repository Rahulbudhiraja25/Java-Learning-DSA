#include<stdio.h>
#include<conio.h>
int main()
{int i,fact, n;

printf("Enter the number \n");
scanf("%d",&n);
fact=i=1;
while(i<=n){
fact=fact*i;
i++;
}
printf("factorial of %d is %d\n",n,fact);
return 0;
}  