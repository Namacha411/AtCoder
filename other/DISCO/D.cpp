#include <bits/stdc++.h>
using namespace std;
typedef signed long long ll;
typedef long double ld;
#define rep(i,n) for(ll i = 0; i < (n); i++)
#define all(x) x.begin(),x.end()
#define DEBUG
#define DEBUG2

int main()
{
	ll m;
	cin >> m;
	vector<char> d(m);
	vector<ll> c(m);

	//input
	ll sumC = 0;
	rep(i,m)
	{
		cin >> d[i] >> c[i];
		sumC += c[i];
	}

	vector<char> v;
	rep(i,m)
	{
		rep(j,c[i])
		{
			v.push_back(d[i]);
		}
	}

#ifdef DEBUG
	rep(i,sumC)
	{
		cout << v[i];
	}
	cout << endl;
#endif

	int s;
	rep(cnt,20)
	{
		rep(i,sumC-1)
		{
			s = (v[i] - '0') + (v[i+1] - '0');
			#ifdef DEBUG2
				cout << s << endl;
			#endif
			if(s > 10)
			{
				v[i] = '1';
				v[i + 1] = static_cast<char>(s%10);
			}
			else
			{
				v[i] = '\0';
				v[i+1] = static_cast<char>(s);
			}
		}
#ifdef DEBUG
	rep(i,sumC)
	{
		cout << v[i];
	}
	cout << endl;
#endif
	}
	return 0;
}