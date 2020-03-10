#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

typedef signed long long ll;
typedef long double ld;

#define rep(i,n) for(int i = 0; i < n; i++)
#define all(x) x.begin(),x,end()

#define __INT_MAX__ 2147483647

//#define DEBUG

int main()
{
	//input
	int n, k, q;
	cin >> n >> k >> q;

	int check = q - k;

	int a[q];
	rep(i, q)
	{
		cin >> a[i];
	}

	int point[n];
	rep(i, n)
	{
		point[i] = 0;
	}

	//solve
	rep(i, q)
	{
		point[a[i]-1]++;
	}

	#ifdef DEBUG
		rep(i,n)
		{
			cout << point[i];
		}
	#endif

	rep(i, n)
	{
		if(point[i] > check)
		{
			cout << "Yes" << endl;
		}
		else
		{
			cout << "No" << endl;
		}
	}
	return 0;
}
