#include<stdio.h>
#include<conio.h>
int main()
{ int h,w;
float bmi;
printf("Enter the weight of the person(in KG)\n");
scanf("%d",&w);

printf("Enter the height of the person(in Meters)\n");
scanf("%d",&h);

bmi=w/h;

printf("The BMI of the person is %f\n",bmi);

if(bmi<15)
printf(" BMI Category : Starvation\n");
else if(bmi>=15.1&&bmi<=17.5)
printf(" BMI Category : Anorexic\n");

else if(bmi>=17.6&&bmi<=18.5)
printf(" BMI Category : Underweight\n");

else if(bmi>=18.6&&bmi<=24.9)
printf(" BMI Category : Ideal\n");

else if(bmi>=25&&bmi<=25.9)
printf(" BMI Category : Ov erweight\n");

else if(bmi>=30&&bmi<=30.9)
printf(" BMI Category : Obese\n");

else if(bmi>=40)
printf(" BMI Category : Morbidly Obese\n");

return 0;
}