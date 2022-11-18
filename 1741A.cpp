#include <iostream>

using namespace std;

char calc(string x, string y) {
	int f = 1, s = 1;
	for (int i = 0; i < x.length(); i++) 
		if (x[i] == 'X') f += 1;
		else if (x[i] == 'S') f *= -1;
		else if (x[i] == 'M') f = 0;
	for (int i = 0; i < y.length(); i++)
		if (y[i] == 'X') s += 1;
		else if (y[i] == 'S') s *= -1;
		else if (y[i] == 'M') s = 0;
	if (f > s) return '>';
	else if (s > f) return '<';
	return '=';
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	string x, y;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		cout << calc(x, y) << endl;
	}
}
