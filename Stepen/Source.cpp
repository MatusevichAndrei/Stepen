#include<iostream>
#include <string>
using namespace std;
int main()
{
    setlocale(0, "");
    double a, b, d;
    int n, i;
    cout << "������� �����:" << endl;
    cin >> a;
    b = a;
    d = a;
    cout << "������� �������:" << endl;
    cin >> n;
    if (n > 0)
    {
        for (i = 1; i < n; i++)
        {
            a = d * b;
            d = a;
        }
    }
    else if (n < 0)
    {
        a = 1;
        for (i = 0; i > n; i = i - 1)
        {
            a = a / b;
        }
    }
    else if (n == 0)
    {
        a = 1;
    }
    cout << a << endl;
    return 0;
}