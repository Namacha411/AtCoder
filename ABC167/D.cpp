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
	ll n, k;
	cin >> n >> k;
	vi a(n);
	rep(i, n) cin >> a[i];

	vi s;
	vi visit(n+1, -1);
	int v = 1;
	int cycle = 1;
	while(visit[v] != -1){
		visit[v] = s.size();
		s.push_back(v);
		v = a[v-1];
	}
	cycle = s.size() - visit[v];
	int l = visit[v];

	if(k < l) cout << s[k] << endl;
	else{
		k -= l;
		k %= cycle;
		cout << s[l+k] << endl;
	}
	return 0;
}