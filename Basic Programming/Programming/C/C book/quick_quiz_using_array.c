#include <stdio.h>
void display(int marks[][3], int std, int sub)
{
    for (int i = 0; i < std; i++)
    {
        for (int j = 0; j < sub; j++)
        {
            printf("The marks of %d student in %d subject is %d\n", i + 1, j + 1, marks[i][j]);
        }
    }
}
int main()
{
    int std = 5;
    int sub = 3;
    int marks[std][sub];
    for (int i = 0; i < std; i++)
    {
        for (int j = 0; j < sub; j++)
        {
            printf("Enter the marks of %d student in %d subject\n", i + 1, j + 1);
            scanf("%d", &marks[i][j]);
        }
    }
    display(marks, 5, 3);
    return 0;
}