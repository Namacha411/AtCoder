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

bool isPrime(int n){
	for(int i = 2; i*i <= n; ++i){
		if(n % i == 0) return false;
	}
	return true;
}

int main() {
	ios::sync_with_stdio(false); cin.tie(nullptr);
	//cout << fixed << setprecision(6);
	int n; cin >> n;

	vi primeTbl;
	for(int i = 2; i <= 55555; i++){
		if(primeTbl.size() == n) break;
		if(isPrime(i) && i % 5 == 1) primeTbl.push_back(i);
	}

	rep(i, n){
		cout << primeTbl[i];
		if(i != n-1) cout << " ";
	}
	cout << endl;
	return 0;
}