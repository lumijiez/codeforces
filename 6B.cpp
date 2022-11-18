#include <iostream>
#include <set>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	char arr[102][102], a;
	set<char> colors;
	char presidentColor;
	int m, n;
	cin >> m >> n >> presidentColor;
	for (int i = 0; i != m + 2; i++)
		for (int j = 0; j != n + 2; j++)
			if (i == 0 || j == 0 || j == n + 1 || i == m + 1)
				arr[i][j] = '.';
			else {
				cin >> a;
				arr[i][j] = a;
			}
	for (int i = 1; i != m + 1; i++) {
		for (int j = 1; j != n + 1; j++) {
			if (arr[i][j] == presidentColor) {
				if (isalpha(arr[i + 1][j]) && arr[i + 1][j] != presidentColor)
					colors.insert(arr[i + 1][j]);
				if (isalpha(arr[i][j + 1]) && arr[i][j + 1] != presidentColor)
					colors.insert(arr[i][j + 1]);
				if (isalpha(arr[i - 1][j]) && arr[i - 1][j] != presidentColor)
					colors.insert(arr[i - 1][j]);
				if (isalpha(arr[i][j - 1]) && arr[i][j - 1] != presidentColor)
					colors.insert(arr[i][j - 1]);
			}
		}
	}
	cout << colors.size();
}
