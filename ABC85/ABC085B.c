#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define DEBUG

int main()
{
    short numOfSheets;
    short numOfStep[100] = {};

    //read
    scanf("%hd", &numOfSheets);
    for(int i = 0; i < numOfSheets; i++)
    {
        scanf("%hd", &numOfStep[i]);
    }

    
    return 0;
}