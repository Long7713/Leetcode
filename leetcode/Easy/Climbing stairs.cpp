#include <bits/stdc++.h>
using namespace std;
int climbstair(int n)
{
    if (n == 0 || n == 1)
        return 1;
    int prev = 1, curr = 1;
    for (int i = 2; i <= n; i++)
    {
        int temp = curr;
        curr = prev + curr;
        prev = temp;
    }
    return curr;
}
int main()
{
    int n;
    cin >> n;
    cout << climbstair(n);
    return 0;
}
