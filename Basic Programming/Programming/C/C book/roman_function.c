#include<stdio.h>
#include<conio.h>
void roam(int);
int main()
{int yr;
printf("Enter the year\n");
scanf("%d",&yr);   
roam(yr);    

return 0;
}

//Function 
void roam(int year){
if(year>=1000){
printf("m");
roam(year-1000);
}

else if(year>=500){
printf("d");
roam(year-500);
}

else if(year>=100){
printf("c");
roam(year-100);
}

else if(year>=50){
printf("l");
roam(year-50);
}

else if(year>=10){
printf("x");
roam(year-10);
}

else if(year>=5){
printf("v");
roam(year-5);
}

else if(year>=1){
printf("i");
roam(year-1);
}

}