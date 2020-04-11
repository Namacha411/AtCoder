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

struct UnionFind
{
	vector<int> d;
	UnionFind(int n = 0): d(n, -1){}
	int find(int x)
	{
		if(d[x] < 0) return x;
		return d[x] = find(d[x]);
	}
	bool unite(int x, int y)
	{
		x = find(x); y = find(y);
		if(x == y) return false;
		if(d[x] > d[y]) swap(x,y);
		d[x] += d[y];
		d[y] = x;
		return true;
	}
	bool same(int x, int y) { return find(x) == find(y); }
	int size(int x) { return -d[find(x)]; }
};

int main() {
	ios::sync_with_stdio(false); cin.tie(nullptr);
	//cout << fixed << setprecision(6);
	int n, m, k;
	cin >> n >> m >> k;
	UnionFind f(n), b(n);
	rep(i, m){
		int a, b;
		cin >> a >> b;
		f.unite(a-1, b-1);
	}
	rep(i, k){
		int c, d;
		cin >> c >> d;
		b.unite(c-1, d-1);
	}

	rep(i, n){
	}
	return 0;
}