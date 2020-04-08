#include <bits/stdc++.h>
using namespace std;

using ll = unsigned long long;
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

int main()
{
	ios::sync_with_stdio(false); cin.tie(nullptr);
	cout << fixed << setprecision(6);
	int n; cin >> n;
	vector<ld> v(n);
	rep(i, n) cin >> v[i];

	sort(all(v));
	list<ld> li;
	rep(i, n) li.push_back(v[i]);
	rep(i, n-1){
		ld t1 = li.front();
		li.pop_front();
		ld t2 = li.front();
		li.pop_front();
		li.push_back((t1 + t2) / 2);
	}

	cout << li.front() << endl;
	return 0;
}
