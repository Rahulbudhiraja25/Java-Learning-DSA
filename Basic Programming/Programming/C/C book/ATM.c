#include<stdio.h>
#include <stdlib.h>
int main()
{int op,PIN,Bal=20000,amt;
printf("Choose A Option\n");
while(1){
printf("1.Cash Withdrawl\t");
printf("2.Balance Enquiry\t");
printf("3.Mini Statement\t");
printf("4.Exit\t");
scanf("%d",&op);

switch(op)
{
case 1:
printf("Please enter your PIN\n");
scanf("%d",&PIN);
if(PIN==2528)
{
printf("Enter The Amount\n");
scanf("%d",&amt);
if(Bal<amt)
 printf("Insufficient Balance!!\n");

else{
printf("Withdrawl success please collect your cash \nThanks For Using ATM Service\n");
Bal=Bal-amt;
printf("Updated balance is %d\n",Bal);
}
}
else
printf("Wrong PIN !!\a");
break;

case 2:
printf("Please enter your PIN\n");
scanf("%d",&PIN);
if(PIN==2528)
{
printf("Balance is %d\n",Bal);
}
else
printf("Wrong PIN !!\a");
break;

case 3:
printf("Please enter your PIN\n");
scanf("%d",&PIN);
if(PIN==2528)
{

printf("Statement is sent to your RMN\n");
}
else
printf("Wrong PIN !!\a");
break;
case 4: 
printf("Thanks for using ATM service\n");
exit(0);
break;
default :
printf("Wrong Input !!\n\n");
}
}
return 0;

}