#include<stdio.h>

int main()
{
    int array[200];

    int n,i;

    //input
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    //chack
    i = 0;
    int j;
    while(1)
    {
        for(j = 0; j < n; j++)
        {
            if((array[j] % 2) == 1) 
            {
                goto FINISH;
            }
            array[j] = array[j] / 2;
        }
        i++;
    }
    FINISH:
    printf("%d\n", i);
}