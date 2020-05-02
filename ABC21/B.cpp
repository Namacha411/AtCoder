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
	int n; cin >> n;
	int a, b;
	cin >> a >> b;
	int k; cin >> k;
	vi p(k);
	rep(i, k) cin >> p[i];

	map<int, int> m;
	m[a]++; m[b]++;
	rep(i, k) m[p[i]]++;
	bool ans = true;
	for(P t : m){
		if(t.second != 1) ans = false;
	}

	cout << (ans ? "YES" : "NO") << endl;
	return 0;
}