// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/T
#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int originalA = a, originalB = b, originalC = c;

    if (a > b)
    {
        swap(a, b);
    }
    if (a > c)
    {
        swap(a, c);
    }
    if (b > c)
    {
        swap(b, c);
    }

    cout << a << "\n"
         << b << "\n"
         << c << "\n\n";

    cout << originalA << "\n"
         << originalB << "\n"
         << originalC;
}
