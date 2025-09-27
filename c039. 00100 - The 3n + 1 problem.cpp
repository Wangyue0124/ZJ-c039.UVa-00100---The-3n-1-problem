#include <iostream>
using namespace std;
int cyclelength(int n);
int main()
{
    int a,b;
    while (cin >> a >> b) 
    {
        int sum = 0,max = 0;
        if (a > b)
        {
            swap(a, b);
        }
        for (int j = a; j <= b; j++)
        {
            
            sum = cyclelength(j);
            if ( sum > max)
            {
                max = sum;
            }
        }
        cout << a << " " << b << " " << max << "\n";
    }
    return 0;
}
int cyclelength(int n)
{
    int sum = 1;
    while (n != 1)
    {
        if (n % 2 == 1)
        {
            n = n * 3 + 1;
        }
        else
        {
            n /= 2;
        }
        sum++;
    }
    return sum;
}