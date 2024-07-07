#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n,x;
    float sum = 0;
    cout << "Hay nhap mot so bat ki: ";
    cin >> x;
    cout << "Hay nhap so mu: ";
    cin >> n;
    for (int i=1;i <= n;i++)
    {
        sum += pow(x,(2*i)+1);
    }
    cout << "S = " << sum << endl;
    return 1;
}