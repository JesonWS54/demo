#include <iostream>
#include <math.h>
using namespace std;

int giaithua(int n) {
	int giaithua = 1;
	for (int i = 1; i <= n; i++) {
		giaithua *= i;
	}
	return giaithua;
}


int main()
{
	int n, x;
	float sum = 0;
	cout << "Nhap x: " << endl; cin >> x;
	cout << "Nhap n: " << endl; cin >> n;
	for (int i = 1; i <= n; i++) {
		sum += float(pow(x, i)) / giaithua(i);
	}
	cout << "Ket qua = " << sum << endl;
	return 0;
}
