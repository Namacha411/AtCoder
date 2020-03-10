#include <stdio.h>
#define DEBUG

int main()
{
    int n, i;
    double sum = 0;
    double in[100] = {};

    //read
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%lf", &in[i]);
    }

    //solve
    for(i = 0; i < n; i++)
    {
        in[i] = 1 / in[i];
        sum += in[i];
    }
    double ans = 1 / sum;

    //write
    printf("%f\n", ans);

    return 0;
}