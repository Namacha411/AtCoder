#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define DEBUG

int main()
{
    int a;
    char s[10] = {};

    //read
    scanf("%d", &a);
    scanf("%s", s);

    //solve & write
    if(a >= 3200)
    {
        printf("%s\n", s);
    }
    else
    {
        printf("red\n");
    }
    
    return 0;
}