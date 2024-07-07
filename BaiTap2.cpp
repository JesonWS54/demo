#include <iostream>

using namespace std;

int main ()
{
    int n;
    int dem=0;
    cout << "Hay nhap vao mot so: ";
    cin >> n;
    for (int i=1;i <= n;i++)
    {
        if (n%i==0)
        dem++;
    }
    if (dem ==2)
        cout << n << " la so nguyen to";
    else 
        cout << n << " khong la so nguyen to";
    return 1;
}