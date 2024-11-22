#include <iostream>
using namespace std;
int main() {
	int student[31] = {0, }, st;
	student[0] = 1;

	for (int i = 1; i <= 28; i++) {
		cin >> st;
		student[st] = 1;
	}
	for (int i = 1; i <= 30; i++) {
		if (student[i] == 0)
			cout << i << endl;
	}
	
}