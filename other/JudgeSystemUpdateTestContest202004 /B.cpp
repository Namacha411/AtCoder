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

int main() {
	ios::sync_with_stdio(false); cin.tie(nullptr);
	//cout << fixed << setprecision(6);
	int n;
	cin >> n;
	vector<pair<int, char>> vp(n);
	rep(i, n) cin >> vp[i].first >> vp[i].second;

	vi red, blue;
	rep(i, n){
		if(vp[i].second == 'R'){
			red.push_back(vp[i].first);
		}
		else{
			blue.push_back(vp[i].first);
		}
	}

	sort(all(red)); sort(all(blue));

	for_each(all(red), [](auto a){
		cout << a << endl;
	});
	for_each(all(blue), [](auto a){
		cout << a << endl;
	});
	return 0;
}