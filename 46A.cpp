#include <iostream>

using namespace std;

int main() {
	int nr, cur=1, inc=1, child=1;
	cin >> nr;
	while (cur < nr) {
		child = child + inc++;
		if (child > nr) child = child % nr;
		cout << child << " ";
		cur++; 
	}
}
