#include <iostream>
#include <math.h>
using namespace std;
int uoc(int a, int b) {
	if (a == 0 && b != 0) cout << "UCLN la: " << b;
	else if (a != 0 && b == 0) cout << "UCLN la: " << a;
	else if (a == 0 && b == 0) cout << "UCLNla: 1";
	else if (a == b) cout << "UCLN la: " << a;
	else if (a > b) {
		while (a > b) {
			a = a - b;
			while (b > a) {
				b = b - a;
			}
		}
		if (a == b) return a;
	}
	else if (b > a) {
		while (b > a) {
			b = b - a;
			while (a > b) {
				a = a - b;
			}
		}
		if (a == b) return a;
	}
}
int main() {
	int a, b, boi;
	cout << "Nhap vao so a: " << endl;
	cin >> a;
	cout << "Nhap vao so b: " << endl;
	cin >> b;
	boi = (a * b) / (uoc(a, b));
	cout << "BCNN la: " << boi << endl;
}