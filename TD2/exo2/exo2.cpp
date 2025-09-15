#include <iostream>
#include <iomanip>
using namespace std;
int multiplier(int x, int y) {
	return x * y;
}

int main(void) {
	int a;
	cout << "Saisissez une valeur entre 1 et 9 compris :" << endl;
	cin >> a;
	while (a < 1 || a>9) {
		cout << "Valeur incorrecte, veuillez reessayer :" << endl;
		cin >> a;
	}
	for (int i = 1; i <= 10; i++) {
		cout << right << setw(4) << multiplier(a, i);
	}
	cout << endl;
	return 0;
}