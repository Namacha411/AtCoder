#include <iostream>
#include <stdlib.h>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

typedef signed long long ll;
typedef long double ld;

#define rep(i,n) for(int i = 0; i < (n); i++)
#define all(x) x.begin(),x.end()

//#define DEBUG

int compare_int(const void *a, const void *b)
{
	return *(int*)a - *(int*)b;
}

int main()
{
	int n, s;

	cin >> n;
	int a[n];
	rep(i, n)
	{
		cin >> s;
		a[s] = i;
	}

	qsort(a, n, sizeof(int), compare_int);

	cout << endl;
	return 0;
}
