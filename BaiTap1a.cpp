
#include <iostream>
#include <math.h>
using namespace std;



int main()
{
	int giaithua = 1, n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		giaithua *= i;
	}
	cout << n << "! = " << giaithua << endl;
	return 0;
}
