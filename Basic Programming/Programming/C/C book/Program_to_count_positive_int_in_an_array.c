#include<stdio.h>
int count=0;
void countpos(int *array,int n){
for(int i=0;i<n;i++){
if(array[i]>0){
    count=count+1;
}
else
count=count;
}
printf("Number of positive integer in this array is %d",count);
}
int main()
{
int array[10]={-5,10,-7,8,9,-6,-5,8,7,9};
countpos(array,10);
return 0;
}