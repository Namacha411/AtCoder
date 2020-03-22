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

void f(int &n)
{
	if(n % 2 == 0) n /= 2;
	else n = n * 3 + 1;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(nullptr);
	//cout << fixed << setprecision(6);
	int n; cin >> n;

	int i;
	vector<bool> v(1000'000, true);
	for(i = 1; i <= 1000'000; i++)
	{
		cerr << n << ' ';
		if(v[n]) v[n] = false;
		else break;
		f(n);
	}
	cerr << endl;
	cout << i << endl;
	return 0;
}