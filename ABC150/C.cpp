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

template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int fact(int n){
	if(n == 0) return 1;
	return n * fact(n - 1);
}

bool equal(const vi &a, const vi &b){
	rep(i, a.size()){
		if(a[i] != b[i]) return false;
	}
	return true;
}

int main() {
	ios::sync_with_stdio(false); cin.tie(nullptr);
	//cout << fixed << setprecision(6);
	int n; cin >> n;
	vi p(n), q(n);
	rep(i, n) cin >> p[i];
	rep(i, n) cin >> q[i];

	vi perm;
	for(int i = 1; i <= n; i++){
		perm.push_back(i);
	}
	int a;
	for(a = 0; a < fact(n); a++){
		if(equal(p, perm)) break;
		next_permutation(all(perm));
	}
	sort(all(perm));
	int b;
	for(b = 0; b < fact(n); b++){
		if(equal(q, perm)) break;
		next_permutation(all(perm));
	}

	cout << abs(a - b) << endl;
	return 0;
}