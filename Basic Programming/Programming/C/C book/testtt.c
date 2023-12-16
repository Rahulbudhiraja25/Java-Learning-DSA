// #include<stdio.h>
// #include<conio.h>
// int main()
// {
// printf("\t\t");
// for(int i=1;i<=10;i++){
// printf("%d\t",i);
// if(i==1||i==3||i==6||i==10)
// printf("\n");
//  if(i==1||i==6||i==3){
//      printf("\t");
// }
// }
// return 0;
// }
#include<stdio.h>
#include<conio.h>
int main()
{
int a=233;
int b=2343;

printf("%u,%u",*(&a),*(&b));
return 0;
}