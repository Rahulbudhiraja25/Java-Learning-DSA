// In this program a  duplicate of strlen is created.
#include <stdio.h>
int calleng(char *rah)
{
    int i = 0;
    while (*rah != '\0')
    {
        i++;
        rah++;
    }
    return i;
}
int main()
{
    char *st = "Rahul_bhai";
    int c = calleng(
        st);
    printf("The length of the string is %d", c);
    return 0;
}