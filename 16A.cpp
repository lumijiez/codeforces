#include<iostream>

using namespace std;
int main() {
  int n, m, i, j;
  cin >> n >> m;
  char a[105], c;
  for (i = 0; i < n; i++) {
    cin >> a;
    if (a[0] == c) {
      cout << "NO";
      return 0;
    }
    c = a[0];
    for (j = 1; j < m; j++)
      if (a[j] != c) {
        cout << "NO";
        return 0;
      }
  }
  cout << "YES";
}
