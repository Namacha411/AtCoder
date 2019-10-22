#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
#define DEBUG

int main()
{
    int i, j;
    long n;
    long height[100000] = {};

    //read
    scanf("%ld", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%ld", &height[i]);
    }

    //solve
    long ans = 0;
    long step = 0;
    for(i = 0; i < n-1; i++)
    {
        j = i;
        step = 0;

        while(true)
        {
            if(height[j] == '\0')
            {
                break;
            }
            else if(height[j] <= height[j+1])
            {
                step++;
            }
            j++;
        }

        if(step >= ans)
        {
            ans = step;
        }
    }

    //write
    printf("%ld\n", ans);

    return 0;
}