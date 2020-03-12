#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
typedef unsigned long long ll;
#define rep(i, n) for(int i = 0; i < (n); i++)

class Solve
{
	public:

		string str;
		int n, ans;

		void input()
		{
			cin >> n;
		}

		void solve()
		{
			for(int i = 1; i <= n; i++)
			{
				str = to_string(i);
				if(((int)(str.length()) % 2) == 1)
				{
					ans++;
				}
			}
		}

		void output()
		{
			cout << ans << endl;
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
