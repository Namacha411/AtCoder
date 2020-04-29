#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
using vi = vector<int>;
using vll = vector<ll>;
using P = pair<int, int>;

const int INF = 1e9;
const ll INFLL = 1e18;
const int MOD = 1e9 + 7;
const int NIL = -1;
const ld PI = acosl(-1);

#define rep(i,n) for(int i=0; i<(n); ++i)
#define all(n) n.begin(),n.end()

int main(){
    string s;
    cin >> s;

    int ans = 0;
    for(int i = 1; i <= 4e3; i++){
        int cnt = 0;
        string strnum = to_string(2019 * i);
        for(auto pos=0;(pos=s.find(strnum,pos))!=string::npos;pos++)
            cnt++;
        if(cnt != 0){
            cerr << strnum + " " << cnt << endl;
            ans += cnt;
        }
    }

    cout << ans << endl;
    return 0;
}