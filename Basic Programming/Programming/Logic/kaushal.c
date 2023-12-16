#include<stdio.h>
#include<string.h>
struct student_id_structure
{
    char name[20];
    char brother_name[30];
    char father_name[30];
    char mother_name[30];
    char gender[2] ;
    int class ;
    int roll_no ;
    char contant[11];
    char addres[40];
};
int main(){
struct student_id_structure s1;
printf("Enter the student name:\n" );
scanf("%s",s1.name);
printf("Enter the student of brother name\n");
scanf("%s",s1.brother_name);
printf("Enter the student of father name\n ");
scanf("%s",s1.father_name);
printf("Enetr the student of mother name\n ");
scanf("%s",s1.mother_name);
 printf("Enter the student of gender \n");
scanf("%s",s1.gender);
printf("Enter the class of the student is\n ");
scanf("%d",&s1.class);
printf("Enter the roll number of the student :\n");
scanf("%d",&s1.roll_no);
printf("Enter the contant number of the student is :\n");
scanf("%s",s1.contant);
printf("Enter the addres of the student is :\n");
scanf("%s",s1.addres);
printf("**************\n");
printf("the name of the student is : %s\n",s1.name);
printf("The brother name of the student is : %s\n",s1.brother_name);
printf("the father name of the student is : %s\n",s1.father_name);
printf("The mother name of the student is : %s\n",s1.mother_name);
printf("the gender of the student is : %s\n",s1.gender);
printf("the class of the student is : %d\n",s1.class);
printf("the roll number of the student is : %d\n",s1.roll_no);
printf("the contant number of the student is : %s\n",s1.contant);
printf("the addres of the student is :  %s\n",s1.addres);
  return 0 ;
}