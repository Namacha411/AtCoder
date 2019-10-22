#include <stdio.h>

int main()
{
    int n, a, b;
    scanf("%d %d %d", &n, &a, &b);

    int i, dig, num, sum;
    int ans = 0;
    for(i = 0; i <= n; i++)
    {
        sum = 0;
        num = i;
        while(num)
        {
            dig = num % 10;
            sum += dig;
            num /= 10;
        }

        if(sum >= a && sum <= b)
        {
            ans += i;
        }
    }

    printf("%d\n", ans);
    return 0;
}