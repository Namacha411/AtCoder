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

#define rep(i,n) for(int i=0; i<(n); ++i)
#define all(n) begin(n),end(n)

template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

#define DEBUG

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	vi a(3);
	rep(i,3) cin >> a[i];

	int seven = 0;
	int five = 0;
	rep(i, 3)
	{
		if(a[i] == 5) five++;
		if(a[i] == 7) seven++;
	}

	if(five == 2 && seven == 1) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}