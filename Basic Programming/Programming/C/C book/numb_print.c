#include<stdio.h>
#include<conio.h>
int main()
{
int numb=1;

printf("\t\t");
while(numb<=10){
printf("\t");
printf("\t%d",numb);
numb++;

while(numb==2){

printf("\n\t");
break;
}

while(numb==4||numb==7){

printf("\n");
break;
}

}
return 0;
}