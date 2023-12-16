#include<stdio.h>
#include<conio.h>
void reverse(int[],int n);
int main()
{int n;
printf("Enter the no of inputs you want in array\n");    
scanf("%d",&n);
int array[n];
for(int i=0;i<n;i++){
printf("Enter the value %d\n",i+1);
scanf("%d",&array[i]);
}

for(int i=0;i<n;i++){
printf("Array %d before function is %d\n",i+1,array[i]);
}
reverse(array,n);
return 0;
}

void reverse(int num[],int n){
for(int i=n;i>0;i--){
printf("Array after reverse is %d\n",num[i-1]);

}


}