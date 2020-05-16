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

int main() {
	ios::sync_with_stdio(false); cin.tie(nullptr);
	//cout << fixed << setprecision(6);
	int n;
	cin >> n;
	map<char, ll> m;
	rep(i, n){
		string s;
		cin >> s;
		m[s[0]]++;
	}

	ll ans = 0;
	ans += m['M'] * m['A'] * m['R'];
	ans += m['M'] * m['A'] * m['C'];
	ans += m['M'] * m['A'] * m['H'];
	ans += m['M'] * m['R'] * m['C'];
	ans += m['M'] * m['R'] * m['H'];
	ans += m['M'] * m['C'] * m['H'];
	ans += m['A'] * m['R'] * m['C'];
	ans += m['A'] * m['R'] * m['H'];
	ans += m['A'] * m['C'] * m['H'];
	ans += m['R'] * m['C'] * m['H'];

	cout << ans << endl;
	return 0;
}