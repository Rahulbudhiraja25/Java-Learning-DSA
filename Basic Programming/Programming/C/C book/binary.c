//INCOMPLETE

#include<stdio.h>
#include<conio.h>
int main()
{
int a;
printf("Enter a number\n");
scanf("%d",&a);
 while(1){
    if(a==0||a==1)
    break;
    else
     a=a/2;
    printf("%d\n",a);

}

return 0;
}