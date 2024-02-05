// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/F

#include <iostream>
using namespace std;
int main()
{
    long long int n, m;
    cin >> n >> m;
    int sum = (n % 10) + (m % 10);
    cout << sum << endl;
}