#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int n;
	float sum = 0.0;
	cout << "Hay nhap so tu nhien n: " << endl;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		sum += 1.0 / (i * (i + 1));
	}
	cout << "Ket qua la: " << sum << endl;
	return 0;
}