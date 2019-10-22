#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

typedef signed long long ll;
typedef long double ld;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) x.begin(), x.end()

#define DEBUG

struct road
{
	int a;
	int b;
	ll c;
};

int deltaRoad(vector<int> s, vector<int> t, vector<road> r, int q, int n)
{
	int allRoad = 0;

	if (s[n] > t[n])
	{
		swap(s[n], t[n]);
	}
	//s[i] - 1 to t[i] - 2
	for (int i = s[n] - 1; i < t[n] - 1; i++)
	{
		allRoad += r[i].c;
	}

	return allRoad;
}
int main()
{
	int n, m, l, q, dr, ans;
	int allRoad = 0;
	vector<road> r;
	vector<int> s, t;

	road s1;
	int s2, s3;

	//input
	cin >> n >> m >> l;
	rep(i, m)
	{
		cin >> s1.a >> s1.b >> s1.c;
		r.push_back(s1);
	}
	cin >> q;
	rep(i, q)
	{
		cin >> s2 >> s3;
		s.push_back(s2);
		t.push_back(s3);
	}

	//solve
	rep(i, q)
	{
		dr = deltaRoad(s, t, r, q, i);
		ans = (dr - (dr % l)) / l;
		cout << ans << endl;
	}

	return 0;
}
