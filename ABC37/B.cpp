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

struct In{
	int l, r, t;
};

int main() {
	ios::sync_with_stdio(false); cin.tie(nullptr);
	//cout << fixed << setprecision(6);
	int n, q;
	cin >> n >> q;
	vi a(n, 0);
	rep(i, q){
		int l, r, t;
		cin >> l >> r >> t;
		l--; r--;
		for(int i = l; i <= r; i++){
			a[i] = t;
		}
	}

	rep(i, n){
		cout << a[i] << endl;
	}
	return 0;
}