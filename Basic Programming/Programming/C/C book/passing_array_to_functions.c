#include<stdio.h>
#include<conio.h>
void printarray(int ptr[],int n){
for(int i=0;i<n;i++){
printf("The value of element %d is %d\n",i+1,ptr[i]);
ptr[3]=5000;
ptr[5]=95;

}
}
int main()
{
int number[]={1,2,3,5,6,90,800};
printarray(number,7);
// printf("The value of 3rd element is %d\n",number[3]);   
return 0;
}