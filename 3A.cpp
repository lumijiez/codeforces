#include <iostream>

using namespace std;

int main() {
	char currentXc;
	int neededX;
	int currentX;
	int currentY;
    char neededXc;
	int neededY;
	int n = 0;
	cin >> currentXc >> currentY;
	cin >> neededXc >> neededY;
	currentX = (int)currentXc;
	neededX = (int)neededXc;
	int distance = max(abs(currentX - neededX), abs(currentY - neededY));
	cout << distance << endl;
	while (currentX != neededX || currentY != neededY) {
		if (currentX < neededX && currentY < neededY) {
			currentX++;
			currentY++;
			cout << "RU";
		}
		else if (currentX < neededX && currentY > neededY) {
			currentX++;
			currentY--;
			cout << "RD";
		}
		else if (currentX > neededX && currentY < neededY) {
			currentX--;
			currentY++;
			cout << "LU";
		}
		else if (currentX > neededX && currentY > neededY)  {
			currentY--;
			currentX--;
			cout << "LD";
		}
		else if (currentY > neededY && currentX == neededX) {
			currentY--;
			cout << "D";
		}
		else if (currentY < neededY && currentX == neededX) {
			currentY++;
			cout << "U";
		}
		else if (currentX < neededX && currentY == neededY) {
			currentX++;
			cout << "R";
		}
		else {
			currentX--;
			cout << "L";
		}
		n++;
		cout << endl;
	}

}
