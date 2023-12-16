#include<stdio.h>
void occheck(char *str,char a){
    while(*str!='\0'){
if(str=='a'){
    printf("Yes");
}else{
    printf("No");
}
str++;
    }
}
int main()
{
char string[]="Rahul";
occheck(string,'h');
return 0;
}