#include<stdio.h>
#include<conio.h>
int lp(int);
int main()
{
int yr;
printf("Enter the year\n");
scanf("%d",&yr);
if (lp(yr)){
    printf("%d is a leap year\n",yr);
}
else 
printf("%d is not a leap year\n",yr);
return 0;
}
int lp(int year){
    if(year%400==0||year%4==0&&year%100!=0)
       return 1;
 else 
return 0;
}


//ALTERNATIVE WAY OF SOLVING THE PROGRAM :  -
// if(year%400==0||year%100!=0&&year%4==0)
//  printf("The year is leap"); 
// else
// printf("the year is not leap");