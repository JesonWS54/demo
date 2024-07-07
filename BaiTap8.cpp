#include <iostream>
#include <math.h>
using namespace std;

int uoc(int a, int b) {
	int res;
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
		if (a == b) {
			res = a;
			return res;
		}
	}
	else if (b > a) {
		while (b > a) {
			b = b - a;
			while (a > b) {
				a = a - b;
			}
		}
		if (a == b) {
			return b;
			res = b;
		}
	}
}

int main() {
	int a, b, c;
	cout << "Nhap vao so a: " << endl;
	cin >> a;
	cout << "Nhap vao so b: " << endl;
	cin >> b;
	cout << "Nhap vao so c: " << endl;
	cin >> c;
	int d = uoc(a, b);
	if (d == 0 && c != 0) cout << "UCLN la: " << c;
	else if (d != 0 && c == 0) cout << "UCLN la: " << d;
	else if (d == 0 && c == 0) cout << "UCLNla: 1";
	else if (d == c) cout << "UCLN la: " << c;
	if (d > c) {
		while (d > c) {
			d = d - c;
			while (c > d) {
				 c = c - d;
			}
		}
		if (d == c) {
			cout << "UCLN la: " << d;
			return 0;
		}
	}
	else if (c > d) {
		while (c > d) {
			c = c - d;
			while (d > c) {
				d = d - c;
			}
		}
		if (d == c) {
			cout << "UCLN la: " << d;
			return 0;
		}
	}
	return 0;
}