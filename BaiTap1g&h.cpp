#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    float sum =0;
    cout << "Hay nhap n: ";
    cin >> n;
    for (float i =1; i <= n;i++)
    {
        sum += i/(i +1);
    }
    cout << "S = " << sum << endl;
    return 1;
}
