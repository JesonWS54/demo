#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int n; cin >> n;
	float sum = 0; 
	if (n > 0) {
		for (int i = 1; i <= n; i++) {
			sum += 1.0 / (2 * i);
		}
		cout << sum << endl;
	}
	else cout << "Du lieu khong hop le!" << endl;
}