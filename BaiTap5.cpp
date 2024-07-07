#include <iostream>

using namespace std;

int main ()
{
    int n=25;
    for (int i=1;i<=n;i+=2)
    {
        int temp = i*i;
        if (temp < n)
        {
            cout << temp << " ";
        }
    }
    cout << endl;
    return 1;
}