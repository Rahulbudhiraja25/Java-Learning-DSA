#include<stdio.h>
#include<conio.h>
void print(int x);
int main()
{
int i;
printf("The address of i is %u\n",&i);
print(i);
return 0;
}
void print(int x){
printf("The address of x is %u\n",&x);

}