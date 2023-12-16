#include<stdio.h>
int main()
{
    //INITIALISING STRINGS
char string[]={'R','a','h','u','l','\0'};
char *ptr= string;
//This one is for convienience made by c compilers 
char strng[]="Rahul";
for(int i=0;i<5;i++){
    printf("%c\n",strng[i]);
}
while(*ptr!='\0'){
printf("%c",*ptr);
ptr++;
}
return 0;
}