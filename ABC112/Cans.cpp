#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>
using namespace std;
using ll = long long;

ll N, X[1009], Y[1009], H[1009]; vector<tuple<ll, ll, ll>>vec;

int main() {
	cin >> N;
	tuple<ll, ll, ll> G = make_tuple(-1, -1, -1);
	for (int i = 1; i <= N; i++) {
		cin >> X[i] >> Y[i] >> H[i];
		if (H[i] >= 1)
			G = make_tuple(X[i], Y[i], H[i]);
	}

	for (int i = 0; i <= 100; i++) {
		for (int j = 0; j <= 100; j++) {
			ll V = get<2>(G) + abs(get<0>(G) - i) + abs(get<1>(G) - j);
			V = max(V, 0LL);
			bool flag = true;
			for (int k = 1; k <= N; k++) {
				ll VV = V - abs(X[k] - i) - abs(Y[k] - j);
				VV = max(VV, 0LL);
				if (H[k] != VV)
					flag = false;
			}
			if (flag == true) vec.push_back(make_tuple(i, j, V));
		}
	}

	if (vec.size() == 1) {
		cout << get<0>(vec[0]) << " "
		<< get<1>(vec[0]) << " "
		<< get<2>(vec[0]) << endl;
	}
	return 0;
}
