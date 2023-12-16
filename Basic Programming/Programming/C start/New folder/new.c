#include<stdio.h>
int main()
{
int i,j,k;
printf("Enter first number\n");
scanf("%d",&i);

printf("Enter second number\n");
scanf("%d",&j);

printf("Enter third number\n");
scanf("%d",&k);

if((i>j)&&(i>k)){

printf("I is greatest\n");    
}
else if(j>k){
    printf("J is greatest\n");
}
else{
    printf("K is greatest\n");
}
return 0;
}