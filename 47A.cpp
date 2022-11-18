#include<iostream>
  
using namespace std;
 
int main() 
{
    int x;
    cin >> x;
    for (int n = 1; n <= x; n++)
        if (n * (n + 1) / 2 == x) {
            cout << "YES";
            return 0;
        }
    printf("NO");
    return 0;
}
