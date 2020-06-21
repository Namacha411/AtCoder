#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
using vi = vector<int>;
using vll = vector<ll>;
using P = pair<int, int>;

constexpr int INF = 1e9;
constexpr ll INFLL = 1e18;
constexpr int MOD = 1e9 + 7;
const ld PI = acosl(-1);

#define rep(i, n) for (int i = 0; i < (n); ++i)
#define all(n) n.begin(), n.end()

ll comb(int n, int r) {
    if (r * 2 > n) r = n - r;
    ll dividend = 1;
    ll divisor = 1;
    for (int i = 1; i <= r; ++i) {
        dividend *= (n - i + 1);
        divisor *= i;
    }
    return dividend / divisor;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //cout << fixed << setprecision(6);
    int n;
    cin >> n;
    vi a(n);
    rep(i, n) cin >> a[i];

    sort(all(a));
    reverse(all(a));
    if(comb(a[0], *lower_bound(all(a), a[0]/2)) < comb(a[0], *upper_bound(all(a), a[0]/2))){
        printf("%d %d", a[0], *lower_bound(all(a), a[0]/2));
    } else {
        printf("%d %d", a[0], *upper_bound(all(a), a[0]/2));
    }
    return 0;
}