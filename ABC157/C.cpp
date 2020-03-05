#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
using vi = vector<int>;
using vll = vector<ll>;
using P = pair<int, int>;

const int INF = INT_MAX;
const ll INFLL = __LONG_LONG_MAX__;
const int MOD = 1e9 + 7;
const int NIL = -1;

#define rep(i,n) for(int i=0; i<(n); ++i)
#define all(n) begin(n),end(n)

template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

#define DEBUG

int main()
{
	int n, m;
	cin >> n >> m;
	vector<P> p(m);
	rep(i, m) cin >> p[i].first >> p[i].second;

	//全探索する
	rep(x, 1000)
	{
		int nx = x / 10;
		vi dig(1, x % 10);
		while(nx != 0)
		{
			dig.push_back(nx % 10); //各位の数字を逆順に入れていく
			nx /= 10; //一つ上の位の数字を取得
		}
		if(dig.size() != n) continue; //桁が求めるものと違うと分かった時点で省く
		reverse(all(dig)); //各位の数字を逆順に入れたので元に戻す

		bool ok = true;
		rep(i, m)
		{
			//存在しない組み合わせを弾く
			if(dig[p[i].first-1] != p[i].second) ok = false;
		}

		//x = 0; x < 1000; x++ なので、
		//ok = true になった時点で最小の組み合わせ
		if(ok)
		{
			cout << x << endl;
			return 0;
		}
	}
	cout << NIL << endl;
	return 0;
}