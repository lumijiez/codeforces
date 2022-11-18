#include <iostream>

using namespace std;

int main() {
	int n, result, k;
	string s;
	cin >> n;
	while (n--) {
		cin >> s;
		result = 0; k = 0;
		for (int i = 0; i < s.size(); i++) {
			if (s[i] == 'L') k++;
			else k = 0;
			if (k >= result) result = k + 1;
		}
		cout << result << "\n";
	}
}
