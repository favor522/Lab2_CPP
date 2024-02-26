#include <iostream>
using namespace std;

int main(){
	int A[10];
	int a;
	int b;
	int c;
	int min = 10;
	for (int i = 0; i < 10; i++) {
		*(A + i) = rand() % 10;
		cout << "Test of the massiv: " << *(A + i) << "\n";
		if (*(A + i) < min) {
			min = *(A + i);
			c = i;
		}
	}
	cout << endl;
	cout << "Minimal element: " << min << "\n";
	cout << endl;
	b = *(A + 9);
	*(A + c) = b;
	*(A + 9) = min;
	for (int i = 0; i < 10; i++) {
		cout << "Test of the massiv: " << *(A + i) << "\n";
	}
	return 0;
}