#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
typedef unsigned long long ll;
#define rep(i, n) for(int i = 0; i < (n); i++)

//#define DEBUG

class Solve
{
	public:

		vector<int> v1,v2;
		int n, p, w, ans;

		void input()
		{
			cin >> n;
			rep(i, n)
			{
				cin >> p;
				v1.push_back(p);
			}

			rep(i, n)
			{
				v2.push_back(i+1);
			}
		}

		void solve()
		{
			//sort(v1.begin(), v1.end());

		#ifdef DEBUG
			rep(i, n) cout << v1[i] << ' ';
			cout << endl;
			rep(i, n) cout << v2[i] << ' ';
			cout << endl;
		#endif

			rep(i,n)
			{
				if(v1[i] != v2[i])
				{
					w++;
				}
			}
		#ifdef DEBUG
			cout << w << endl;
		#endif
		}

		void output()
		{
			if(w == 0 || w == 2)
			{
				cout << "YES" << endl;
			}
			else
			{
				cout << "NO" << endl;
			}
        }
};

Solve s;
int main()
{
    s.input();
	s.solve();
	s.output();
	return 0;
}
