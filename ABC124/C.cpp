#include <bits/stdc++.h>
using namespace std;
typedef signed long long ll;
typedef long double ld;
#define rep(i,n) for(int i = 0; i < (n); i++)
#define all(x) x.begin(),x.end()
#define DEBUG

int main()
{
    string s;
    cin >> s;

    int ans = 0;
    rep(i, s.size())
    {
        if(s[i] == s[i+1])
        {
            s[i+1] = (char)((!(int)(s[i+1] - '0')) + '0');
            ++ans;
        }
    }

    cout << ans << endl;
    return 0;
}