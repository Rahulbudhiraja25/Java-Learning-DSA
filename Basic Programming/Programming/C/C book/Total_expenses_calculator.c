#include<stdio.h>
#include<conio.h>
int main()
{float total,price;
    int quant,discount;
 printf("Enter the quantity of product\n");
 scanf("%d",&quant);

 printf("Enter the price of product\n");
 scanf("%f",&price);
 
  if(quant>1000)
  discount=10;
  else
  discount=0;  
  total=(quant*price)-(quant*price*discount/100);
  printf("Total expenses are :%f",total); 
return 0;
}