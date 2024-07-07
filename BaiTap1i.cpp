#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    float sum =0;
    int mau =0;
    cout << "Hay nhap n: ";
    cin >> n;
    for (int i =1; i <= n;i++)
    {
        mau += i;
        sum += 1.0/mau;
    }
    cout << "S = " << sum << endl;
    return 1;
}
