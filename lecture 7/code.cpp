#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a[10], n, i, k = 0;
    cout << "Enter the number to convert: ";
    cin >> n;
    for (i = 0; n > 0; i++)
    {
        a[i] = n % 2;
        n = n / 2;
    }
    cout << "Binary of the given number= ";
    for (i = i - 1; i >= 0; i--)
    {
        cout << a[i];
        k++;
    }
    for (int i = 0; i < k; i++)
    {
        if (a[i] == 0)
        {
            a[i] = 1;
        }
        else
        {
            a[i] = 0;
        }
    }
    cout << endl
         << "complement form" << endl;
    for (int i = 0; i < k; i++)
    {
        cout << a[i] * pow(2, --k);
    }
}