#include<stdio.h>
#include<conio.h>
int main(){
int eng,hin,math,sci,ss;
float percnt,agg_marks;
printf("Enter the marks in english\n",eng);
scanf("%d",&eng);
printf("Enter the marks in hindi\n",hin);
scanf("%d",&hin);
printf("Enter the marks in math\n",math);
scanf("%d",&math);
printf("Enter the marks in science\n",sci);
scanf("%d",&sci);
printf("Enter the marks in social science\n",ss);
scanf("%d",&ss);
agg_marks=eng+hin+math+sci+ss;

printf("Aggregate Marks = %f/500\n",agg_marks);

percnt=agg_marks*0.2;
printf("percentage is %f\n",percnt);
return 0;
}