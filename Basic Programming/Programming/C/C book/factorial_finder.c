#include<stdio.h>
int main()
{int a,factorial=1;
printf("Enter the number till you want to calculate the factorial\n");
scanf("%d",&a);
for(int i=1;i<=a;i++){

factorial=factorial*i;

}
printf("The factorial of given number is %d",factorial);
return 0;
}