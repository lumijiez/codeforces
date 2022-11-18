#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	int m = n;
	bool x = false;
	cin >> n;
	if (n == 1) x = true;
	while(m--) if (pow(2, m) == n) x = true;
	if (x) cout << "YES";
	else cout << "NO";
}
