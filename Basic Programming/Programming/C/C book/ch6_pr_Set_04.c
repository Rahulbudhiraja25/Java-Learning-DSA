#include<stdio.h>
#include<conio.h>
void avsu(int a,int b,int *,float *);
int main()
{int n1,n2,sum;
float avg;

printf("Enter the number 1\n");  
scanf("%d",&n1);
printf("Enter the number 2\n");  
scanf("%d",&n2);
avsu(n1,n2,&sum,&avg);
printf("Sum is %d\n Average is %f\n",sum,avg);
return 0;
}
void avsu(int a,int b,int *sum,float *avg){
 *sum=(a)+(b);
 *avg=(float)(*sum)/2;
}