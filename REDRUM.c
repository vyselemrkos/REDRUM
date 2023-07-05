#include <stdio.h>
#include <string.h>

int main()
{
    char string [] = "REDRUM";
    int length = sizeof(string)/sizeof(string[0]);
    int i=0;
    for(i=length-1;i>=0;i--)
    {
        printf("%c",*(string+i));
    }
    return 0;
}