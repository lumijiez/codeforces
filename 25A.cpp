#include <iostream>

using namespace std;

int main() {
	int nr[100], n;
	cin >> n;
	int even = 0, odd = 0;
	bool lookForEven = true;
	for (int i = 0; i != n; i++) cin >> nr[i];
	for (int i = 0; i != n; i++) if (nr[i] % 2 == 0) even++; else odd++;
	if (even > odd) lookForEven = false;
	if (lookForEven) {
		for (int i = 0; i != n; i++) if (nr[i] % 2 == 0) {
			cout << i+1; break;
		}
	}
	else if (!lookForEven) {
		for (int i = 0; i != n; i++) if (nr[i] % 2 != 0) {
			cout << i+1; break;
		}
	}
}
