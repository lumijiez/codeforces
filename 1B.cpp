#include <iostream>
#include <string>
#include <string.h>
#include <algorithm> 

using namespace std;

string getFirstLetters(string str) {
    string nr;
    for(int i = 0; i != str.size(); i++) 
        if (str[i] >= 65 && str[i] <= 90) nr += str[i];
    str += '\0';
    return nr;
}
int getLastNumber(string str) {
    string number;
    for (int i = 0; i != str.size(); i++) 
        if (str[i] >= 48 && str[i] <= 57) number += str[i];
    return stoi(number);
}
int getSecondNumber(string str) {
	bool C = false;
	string number;
	for (int i = str.find('C')+1; i != str.size(); i++) number += str[i];
	return stoi(number);
}
int getFirstNumber(string str) {
	string number;
	for (int i = 0; i != str.find('C'); i++)
       if (str[i] >= 48 && str[i] <= 57) number += str[i];
	return stoi(number);
}
bool isRCType(string str) {
	for (int i = 0; i != str.length() - 1; i++)
		if (str[i] >= 48 && str[i] <= 57 && str[i + 1] == 'C') return true;
	return false;
}
int titleToNumber(string s)
{
    int result = 0;
    for (const auto& c : s)
    {
        result *= 26;
        result += c - 'A' + 1;
    } return result;
}
void printRC(string strn) {
    char str[300];
    int i = 0;
    int n = getSecondNumber(strn);
        while (n > 0) {
            int rem = n % 26;
            if (rem == 0) {
                str[i++] = 'Z';
                n = (n / 26) - 1;
            }
            else {
                str[i++] = (rem - 1) + 'A';
                n = n / 26;
            }
        }
        str[i] = '\0';
        reverse(str, str + strlen(str));
        cout << str << getFirstNumber(strn) << endl;
}
void printString(string str) {
    if (isRCType(str)) printRC(str);
    else cout << "R" << getLastNumber(str) << "C" << titleToNumber(getFirstLetters(str)) << endl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	int n;
	string str;
	cin >> n;
    for (int i = 0; i != n; i++) {
        cin >> str;
        printString(str);
    }
}
