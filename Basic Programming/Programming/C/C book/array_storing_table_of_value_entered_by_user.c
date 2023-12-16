#include<stdio.h>
#include<conio.h>
int main()
{int n;
printf("Enter the number\n");    
scanf("%d",&n);
int arr[10];
for(int i=0;i<10;i++){
arr[i]=n*(i+1);
}
for(int i=0;i<10;i++){
printf("%dX%d=%d\n",n,i+1,arr[i]);
}
return 0;
}