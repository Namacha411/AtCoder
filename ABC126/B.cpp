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
const ld PI = acos(-1);

#define rep(i,n) for(int i=0; i<(n); ++i)
#define all(n) n.begin(),n.end()

template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main()
{
	ios::sync_with_stdio(false); cin.tie(nullptr);
	//cout << fixed << setprecision(6);
	int n; cin >> n;
	int r = n % 100;
	int l = n / 100;

	bool rIsMonth = false;
	bool lIsMonth = false;

	if(1 <= r && r <= 12) rIsMonth = true;
	if(1 <= l && l <= 12) lIsMonth = true;

	if(rIsMonth && lIsMonth)
		cout << "AMBIGUOUS" << endl;
	else if(!rIsMonth && lIsMonth)
		cout << "MMYY" << endl;
	else if(rIsMonth && !lIsMonth)
		cout << "YYMM" << endl;
	else
		cout << "NA" << endl;

	return 0;
}