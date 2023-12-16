#include <stdio.h>
void brazil();
void italy();
void india();
int main()
{
    printf("I am in the main\n");
    italy();
    india();
    brazil();
    return 0;
}

void brazil()
{
    printf("I am in brazil\n");
}
void italy()
{
    printf("I am in italy\n");
}
void india()
{
    printf("I am in india\n");
}