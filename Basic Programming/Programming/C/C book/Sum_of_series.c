#include<stdio.h>
#include<conio.h>
int main()
{
int num=1,count;
float sum=0.0,fact;

while(num<=7)
{ fact=1;
  
for(count=1;count<=num;count++){

fact=fact*count;

}
sum=sum+num/fact;
num++;
}
printf("Sum of series is %f",sum);

return 0;
}