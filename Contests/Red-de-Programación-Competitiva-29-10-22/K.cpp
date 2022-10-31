#include <bits/stdc++.h>

using namespace std;

#define ALL(x) x.begin(), x.end()

typedef pair<int, int> ii;
typedef vector<int> vi;
typedef long long ll;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int a, b, c, d, m = 0, t = 0, bo = 0;
	cin >> a >> b >> c >> d;

	while(m < c + d) {
		t++;
		m += a;
	}

	if((m - d) % b != 0) {
		cout << "No solution.\n";
		return 0;
	}

	bo = (m - d) / b;

	cout << "We need " << t << " truck" << (t == 1 ? " " : "s ") << "and " << bo << " boat" << (bo == 1 ? "" : "s") << "." << endl;

	return 0;
}