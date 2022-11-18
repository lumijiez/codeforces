#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, g;
	vector<int> tests;
	cin >> n;
	for (int i = 1; i <= n+1; i++) tests.push_back(i);
	while(n--) {
		cin >> g;
		if (count(tests.begin(), tests.end(), g)) tests.erase(remove(tests.begin(), tests.end(), g), tests.end());
	}
	cout << *tests.begin();
}
