#include <iostream>

using namespace std;

int main() {
	int a, b, n, d = 0;
	int years[100];
	cin >> n;
	for (int i = 0; i < n-1; i++) cin >> years[i];
	cin >> a >> b;
	int i = a-1;
	while (a++ < b) 
		d += years[i++];
	cout << d;
}
