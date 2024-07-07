#include <iostream>

using namespace std;

int main ()
{
    int n;
    int dem=0;
    int sum=0;
    cout << "Hay nhap vao mot so: ";
    cin >> n;
    for (int i=1;i < n;i++)
    {
        if (n%i==0)
        sum += i;
    }
    if (sum==n)
        cout << n << " la so hoan chinh";
    else 
        cout << n << " khong la so hoan chinh";
    return 1;
}