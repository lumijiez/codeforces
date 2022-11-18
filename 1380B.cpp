#include <iostream>
using namespace std;
int main() {
    int t, nrR, nrP, nrS, ans;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        nrR = 0, nrP = 0, nrS = 0, ans = 0;
        char c;
        for (int i = 0; i < s.length(); i++) 
            if (s[i] == 'R') nrR++;
            else if (s[i] == 'S') nrS++;
            else nrP++;
        ans = max(nrP, max(nrS, nrR));
        if (ans == nrP) c = 'S';
        else if (ans == nrS) c = 'R';
        else c = 'P';
        for (int i = 0; i < s.length(); i++) cout << c;
        cout << endl;
    }
    return 0;
}
