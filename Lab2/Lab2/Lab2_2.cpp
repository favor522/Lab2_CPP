#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int n;
	int min = 11;
	int max = 0;
	int modmin = 11;
	int a = 0;
	int b = 0;
	int c = 0;
	int Summa = 0;
	int Proiz = 1;
	cout << "Input number of element in massiv: ";
	cin >> n;
	int *A = new int [n];
	if (cin.fail() || n < 0){
		cout << "Error type!";
		return 0;
	}
	for (int i = 0; i < n; i++) {
		*(A + i) = rand() % 20 - 10;
		cout << "Test of the massiv: " << *(A + i) << "\n";
		if (*(A + i) < min) {
			modmin = abs(*(A + i));
			min = *(A + i);
			a = i;
		}
		if (*(A + i) > max) {
			max = *(A + i);
			b = i;
		}
		if (*(A + i) > 0) {
			Summa = Summa + *(A + i);
		}
	}
	cout << "Max number in massiv: " << max << "\n";
	cout << "Min number in massiv: " << min << "\n";
	cout << "Min number in massiv by module: " << modmin << "\n";
	cout << "Max number of element in massiv: " << b << "\n";
	cout << "Min number of element in massiv: " << a << "\n";
	cout << "Summa of numbers bigger than 0 in massiv A: " << Summa << "\n";
	for (int i = a + 1; i < b; i++) {
		Proiz = Proiz * (*(A + i));
	}
	cout << "Proizvedenie of numbers in massiv A: " << Proiz << "\n";

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - 1; j++) {
			if (*(A + j) > *(A + j + 1)) {
				c = *(A + j);
				*(A + j) = *(A + j + 1);
				*(A + j + 1) = c;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		cout << "Sorted massiv A from min to max: " << *(A + i) << "\n";
	}
	return 0;
}