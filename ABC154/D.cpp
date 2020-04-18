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
#define all(n) n.begin(),n.end()

template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return true; } return false; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return true; } return false; }

#define DEBUG

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	int n,k;
	cin >> n >> k;
	vector<ld> p(n);
	rep(i, n) cin >> p[i];

	vector<ld> sum(n + 1, 0);
	for(int i = 1; i <= n; i++)
		sum[i] = sum[i-1] + (p[i-1]+1)/2;
	ld m = 0;
	for(int i = 0; i <= n-k; i++){
		m = max(m, sum[i+k]-sum[i]);
	}

	cout << fixed << setprecision(10);
	cout << m << endl;
	return 0;
}