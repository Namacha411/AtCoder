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

ll fact(int n){
	if(n == 0) return 1;
	return (n * fact(n-1)%MOD)%MOD;
}
int main() {
	ios::sync_with_stdio(false); cin.tie(nullptr);
	//cout << fixed << setprecision(6);
	int n; cin >> n;

	cout << fact(n) << endl;
	return 0;
}