#include<stdio.h>
int main()
{
int array[3];
for(int i=0;i<=9;i++){
array[i]=2*(i+1);
}
for(int z=0;z<=9;z++){
printf("%d\n",array[z]);

}
return 0;
}