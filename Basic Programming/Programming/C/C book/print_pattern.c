#include<stdio.h>
#include<conio.h>
void printpattern(int n);
int main()

{ 
    int n=3;
    printpattern(n); //Function_Call
    return 0;
}


//Function_Defination:
void printpattern(int n){
if(n==1){
    printf("*\n");
    return;
}
printpattern(n-1);
for(int i=0;i<(2*n-1);i++){
printf("*");

}
printf("\n");


}