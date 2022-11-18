#include <iostream>

using namespace std;
int n = 1, a[30005], i = 0;
int main() {
    cin >> a[0] >> a[0];
    while (cin >> a[n++]);
    i = 1; n = 1;
    while (i < a[0]) {
        n += a[i];
        i = n;
    }
    (n == a[0]) ? cout << "YES" : cout << "NO";
}

