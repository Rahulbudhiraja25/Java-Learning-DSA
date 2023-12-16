#include<stdio.h>
void reverse(int array[],int n){
for(int i=0;i<(n/2);i++){
int temp;
temp=array[i];
array[i]=array[n-i-1];
array[n-i-1]=temp;
}
}
int main(){
int n;
printf("Enter the number of terms you want in array\n");
scanf("%d",&n);
int array[n];
for(int i=0;i<n;i++){
printf("Enter the %d term of the array\n",i+1);
scanf("%d",&array[i]);
}
reverse(array,n);
for(int j=0;j<n;j++){



}
return 0;
}