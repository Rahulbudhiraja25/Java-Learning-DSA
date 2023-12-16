#include<stdio.h>
int main()
{
int a;
printf("Enter a number\n");
scanf("%d",&a);
int array[10];
for(int i=0;i<10;i++){
array[i]=a*(i+1);
}

for(int i=0;i<10;i++){
printf("%d*%d=%d\n",a,i+1,array[i]);
}

return 0;
}