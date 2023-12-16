#include<stdio.h>
int main()
{
int a,b,n,ar[90];
printf("Enter the number of elements in the array(less than 50)\n");
scanf("%d",&n);
printf("Enter the %d numbers\n",n);
 for(a=0;a<n;a++){
scanf("%d",&ar[a]);
}
return 0;
}