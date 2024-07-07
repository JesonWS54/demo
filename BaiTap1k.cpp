#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n,x;
    float sum = 0;
    cout << "Hay nhap x: ";
    cin >> x;
    cout << "Hay nhap n: ";
    cin >> n;
    for (int i = 1;i <= n;i++)
    {
        sum += pow(x,2*i);
    }
    cout << "S = " << sum << endl;
    return 1;
    
}
