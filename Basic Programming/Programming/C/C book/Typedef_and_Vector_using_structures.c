//Typedef is used to create an alias name for a custom data type in structure

#include<stdio.h>
typedef struct vector{
int x;
int y;

}vector;
int main()
{
    vector a1,a2;
    a1.x=32;
    a1.y=64;
    printf("X axis of a1 is %d & y axis of a1 is %d\n ",a1.x,a1.y);
    
    a2.x=25;
    a2.y=50;
    printf("X axis of a2 is %d & y axis of a2 is %d \n",a2.x,a2.y);
    
return 0;
}