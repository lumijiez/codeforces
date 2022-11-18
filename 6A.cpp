#include<iostream>

using namespace std;
int main() {
  bool segment = false, triangle = false;
  int arr[4], arr2[16];
  for (int i = 0; i < 4; i++)
    cin >> arr[i];
  for (int i = 0; i < 8; i++) {
    arr2[i] = arr[i % 4];
    arr2[15 - i] = arr[(8 - i) % 4];
  }
  for (int i = 0; i < 14; i++) {
    if (arr2[i] + arr2[i + 1] ==
      arr2[i + 2] || arr2[i] + arr2[i + 2] == arr2[i + 1] ||
      arr2[i + 1] + arr2[i + 2] == arr2[i]) segment = true;
    if (arr2[i] + arr2[i + 1] > arr2[i + 2] &&
      arr2[i + 1] + arr2[i + 2] > arr2[i] && arr2[i] +
      arr2[i + 2] > arr2[i + 1]) triangle = true;
  }
  if (triangle) cout << "TRIANGLE";
  else if (segment) cout << "SEGMENT";
  else cout << "IMPOSSIBLE";
}
