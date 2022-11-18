#include <iostream>
#include <vector>

using namespace std;

int main() {
    pair < int, int > periods[100];
    int n, p1, p2, p3, t1, t2, temps = 0, total = 0, power = 0;
    cin >> n >> p1 >> p2 >> p3 >> t1 >> t2;
    for (int i = 0; i != n; i++) cin >> periods[i].first >> periods[i].second;
    if (n > 1)
        for (int i = 0; i != n - 1; i++) {
            temps = periods[i + 1].first - periods[i].second;
            if (temps > t1) {
                power += t1 * p1;
                temps -= t1;
            }
            else {
                power += temps * p1;
                continue;
            }
            if (temps > t2) {
                power += t2 * p2;
                temps -= t2;
            }
            else {
                power += temps * p2;
                continue;
            }
            if (temps > 0) power += temps * p3;
            else continue;
        }
    for (int i = 0; i != n; i++)
        total += periods[i].second - periods[i].first;
    cout << total * p1 + power;
}
