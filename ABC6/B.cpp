#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
using vi = vector<int>;
using vll = vector<ll>;
using P = pair<int, int>;

const int INF = 1e9;
const ll INFLL = 1e18;
const int MOD = 1e4 + 7;
const int NIL = -1;
const ld PI = acosl(-1);

#define rep(i,n) for(int i=0; i<(n); ++i)
#define all(n) n.begin(),n.end()

template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

const int MAX = 1e6 + 1;
ll T[MAX] = {};
ll tri(ll n){
	if(n == 0 || n == 1) return 0;
	if(n == 2 || n == 3) return 1;
	if(T[n] != 0) return T[n] % MOD;
	return T[n] = (tri(n-1) + tri(n-2) + tri(n-3)) % MOD;
}
int main() {
	ios::sync_with_stdio(false); cin.tie(nullptr);
	//cout << fixed << setprecision(6);
	int n;
	cin >> n;

	cout << tri(n-1) << endl;
	return 0;
}