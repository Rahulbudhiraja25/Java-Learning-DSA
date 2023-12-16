#include <stdio.h>
#include <conio.h>
int calsum(int, int);

int main()
{ 
    int a, b, c;
    printf("enter first number\n");
    scanf("%d", &a);
    printf("enter second number\n");
    scanf("%d", &b);
    c = calsum(a, b);
    printf("Sum of two number is %d", c);
    getch();
    return 0;
}

int calsum(int g, int h)
{ int f;
     f = g + h;
    return f;
}
