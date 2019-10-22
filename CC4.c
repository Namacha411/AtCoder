#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
//define DEBUG

int main()
{
    int n, num1, num2, num3;
    int i,j;
    int arrayL[30][30] = {};
    int arrayR[30][30] = {};
    int ans[30][30] = {};

    //read
    scanf("%d %d %d %d", &n, &num1, &num2, &num3);
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &arrayL[i][j]);
        }
    }
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &arrayR[i][j]);
        }
    }

    //sum
    int sum;
    for(j = 0; j < n; j++)
    {
        sum = 0;
        for(i = 0; i < n; i++)
        {
            if((sum <= num1) && ((sum + arrayR[i][j]) >= num1) && ((sum + arrayL[i][j]) <= num1))
            {
                ans[i][j] = num1 - sum;
#ifdef DEBUG
                printf("\n\nget1\n\n");
#endif
            }
            else if((sum <= num2) && ((sum + arrayR[i][j]) >= num2) && ((sum + arrayL[i][j]) <= num2))
            {
                ans[i][j] = num2 - sum;
#ifdef DEBUG
                printf("\n\nget2\n\n");
#endif
            }
            else if((sum <= num3) && ((sum + arrayR[i][j]) >= num3) && ((sum + arrayL[i][j]) <= num3))
            {
                ans[i][j] = num3 - sum;
                sum = 0;
#ifdef DEBUG
                printf("\n\nget3\n\n");
#endif
            }
            else
            {
                ans[i][j] = arrayL[i][j];
            }
            
            sum += ans[i][j];
        }
    }

    //write
#ifdef DEBUG
    i = 0;
    printf("\n\nmin\n");
    for(j = 0; j < n; j++)
    {
        printf("%d ", arrayL[i][j]);
    }

    printf("\nmax\n");
    for(j = 0; j < n; j++)
    {
        printf("%d ", arrayR[i][j]);
    }

    printf("\nans\n");
    for(j = 0; j < n; j++)
    {
        printf("%d ", ans[i][j]);
    }

    printf("\n\n");

#endif

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d ", ans[i][j]);
        }
        printf("\n");
    }
    return 0;
}