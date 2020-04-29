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

int main()
{
	ios::sync_with_stdio(false); cin.tie(nullptr);
	//cout << fixed << setprecision(6);
	int n; cin >> n;
	vector<string> vs(n);
	rep(i, n) cin >> vs[i];

	bool ans = true;
	map<string, int> ms;
	rep(i, n) ms[vs[i]]++;
	for(auto t : ms){
		if(t.second != 1) ans = false;
	}
	rep(i, n-1){
		if(vs[i].back() != vs[i+1].front()){
			ans = false;
		}
	}

	cout << (ans ? "Yes" : "No") << endl;
	return 0;
}