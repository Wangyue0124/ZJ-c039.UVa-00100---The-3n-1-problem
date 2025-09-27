#include <iostream>
using namespace std;
int cyclelength(int n);
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b;
    while (cin >> a >> b) {
        int sum = 0, max = 0, n = a, m = b;
        if (a > b) swap(a, b);
        for (int j = a; j <= b; j++) {
            sum = cyclelength(j);
            if ( sum > max) max = sum;
        }
        cout << n << " " << m << " " << max << "\n";
    }
    return 0;
}
int cyclelength(int n)
{
    int sum = 1;
    while (n != 1) {
        if (n % 2 == 1) n = n * 3 + 1;
        else n /= 2;
        sum++;
    }
    return sum;
}