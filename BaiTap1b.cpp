#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int n,sum = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		sum += pow(i, 2);
	}
	cout << "Ket qua la: " << sum << endl;
}