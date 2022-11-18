#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<char> sequence;
	char a;
	int n, len;
	cin >> n;
	while (n--) {
		cin >> len;
		sequence.clear();
		for (int i = 0; i != len; i++) {
			cin >> a;
			sequence.push_back(a);
		}
		sequence.push_back('1');
		for (int j = 0; j != len; j++) {
			for (int i = 0; i != sequence.size()-1; i++)
				if (sequence[i] == '(' && sequence[i + 1] == ')') {
					sequence[i] = '0';
					sequence[i + 1] = '0';
				}
			sequence.erase(std::remove(sequence.begin(), sequence.end(), '0'), sequence.end());
		}
		cout << (count(sequence.begin(), sequence.end(), '(') + count(sequence.begin(), sequence.end(), ')')) / 2 << endl;
	}
}
