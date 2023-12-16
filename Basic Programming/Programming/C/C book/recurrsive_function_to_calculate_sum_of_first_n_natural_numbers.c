#include<stdio.h>
#include<conio.h>
int sum(int a);
int main()
{int a;
printf("Enter  the n(number of terms)\n");
scanf("%d",&a);
printf("The sum of %d natural numbers is %d\n",a,sum(a));

return 0;
}
int sum(int n){
if(n!=0)
return (sum(n-1)+n);
else
 return n;
}
