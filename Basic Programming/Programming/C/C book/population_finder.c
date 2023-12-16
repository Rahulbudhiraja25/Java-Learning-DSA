#include<stdio.h>
#include<conio.h>
int main()
{
int pop=100000;
int count=1,year=2010;

while(count<=10){
//&&year>=2000
printf("Population at the end of %d year is %d\n",year,pop);
pop=pop-(0.1*pop);
//printf("Population at the end of %d year is %d\n",year,pop);
year--;
count++;

}
return 0;
}