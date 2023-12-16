#include <stdio.h>
#include <string.h>
struct student_id_structure
{
    char name[50];
    char father_name[50];
    char mother_name[50];
    int roll_no;
    char contact[11];
    char address[120];
    char gender;
};

int main()
{
    struct student_id_structure s1;
    strcpy(s1.name, "Xyz");
    strcpy(s1.father_name, "YYz");
    strcpy(s1.mother_name, "ZZz");
    s1.roll_no = 56;
    strcpy(s1.contact, "1234567890");

    strcpy(s1.address, "248 phase b ,xyz nagar asdfghj");
    s1.gender = 'M';

    printf("Name of student is %s\n", s1.name);
    printf("Father'sName of student is %s\n", s1.father_name);
    printf("Mother'sName of student is %s\n", s1.mother_name);
    printf("Roll no of student is %d\n", s1.roll_no);
    printf("Contact number of student is %s\n", s1.contact);
    printf("Address of student is %s\n", s1.address);
    printf("Gender of student is %s\n", s1.gender);
    return 0;
}