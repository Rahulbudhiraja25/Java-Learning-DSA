#include <stdio.h>
void display(int temp[], int std, int sub)
{
    for (int i = 0; i < std; i++)
    {
        for (int j = 0; j < sub; j++)
        {
            printf("The marks of %d student in %d subject is %d \n", i + 1, j + 1, temp[i]);
        }
    }
}
int main()
{
    int std = 5;
    int sub = 6;
    int marks[std][sub];
    for (int i = 0; i < std; i++)
    {
        for (int j = 0; j < sub; j++)
        {
            printf("Enter the marks of %d student in %d subject \n", i + 1, j + 1);
            scanf("%d", &marks[i][j]);
        }
    }
    display(marks, std, sub);
    return 0;
}