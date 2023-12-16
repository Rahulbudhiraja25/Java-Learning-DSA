#include<stdio.h>
int main()
{int n;
printf("Enter the number whose table you want to print\n");
scanf("%d",&n);
printf("****Table of %d ****\n\n\n");
for(int i=1;i<=10;i++){
printf("%d X %d =%d\n",n,i,n*i);
}
return 0;
}