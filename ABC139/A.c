#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
#define DEBUG
#define rep(i,n) for(int i = 0; i < (n); i++)
typedef long long int ll;
typedef unsigned int Uint;


int main()
{
    char inS[4] = {};
    char inT[4] = {};
    //read
    scanf("%s", inS);
    scanf("%s", inT);

    //solve
    int ans = 0;
    for(int i = 0; i < 3; i++)
    {
        if(inT[i] == inS[i])
        {
            ans++;
        }
    }

    //write
    printf("%d\n", ans);

    return 0;
}