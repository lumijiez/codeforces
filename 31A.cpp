#include <iostream>
using namespace std;

int main() {
	int nr,number=0,sum,worms[100];
	cin >> nr;
	for (int i = 0; i != nr; i++) cin >> worms[i];
	for (int i = 0; i != nr; i++) 
		for (int j = 0; j != nr; j++) {
			if (i == j) break;
			sum = worms[i] + worms[j];
			for (int z = 0; z != nr; z++) if (worms[z] == sum) {
				cout << z + 1 << " " << i + 1 << " " << j + 1 << endl;
				return 0; 
			}
		}
    cout << -1;
}
