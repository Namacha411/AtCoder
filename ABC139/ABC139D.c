#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
#define DEBUG
#define rep(i, n) for(int i = 0; i < (n); i++)
typedef long long ll;

int main()
{
    ll n;
    //read
    scanf("%lld", &n);

    //solve
    ll sum = 0;
    rep(i, n)
    {
        sum += i;
    }

    //write
    printf("%lld", sum);

    return 0;
}