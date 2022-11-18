#include <iostream>
#include <map>
using namespace std;

int main() {
	map<int, int> nr;
	int len, num, max = 0, nrr = 0, maxHeight = 0;
	cin >> len;
	for (int i = 0; i < len; i++) {
		cin >> num;
		if (nr.find(num) == nr.end()) nr.insert(pair<int, int>(num, 1));
		else nr[num]++;
	}
	for (auto it = nr.begin(); it != nr.end(); it++)
		if (it->second > maxHeight) maxHeight = it->second;
	cout << maxHeight << " " << nr.size();
}
