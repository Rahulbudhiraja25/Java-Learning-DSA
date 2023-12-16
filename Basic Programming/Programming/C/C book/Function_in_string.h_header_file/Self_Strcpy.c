#include<stdio.h>
void srtingdoubl(char *target,char *source);
int main()
{
char source[]="Sayonara",target[20];
srtingdoubl(target,source);
printf("The source is %s\n",source);
printf("The target is %s\n",target);
return 0;
}void srtingdoubl(char *target,char *source){
while(*source!='\0'){
*target=*source;
target++;
source++;
}
target='\0';


}