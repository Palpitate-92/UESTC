#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, k, value;
        cin >> n >> k;
        if (n == 1 || k == 0)
            cout << "0\n";
        else if (n == 2)
            cout << "1\n";
        else if (k == 1)
            cout << "0\n";
        else if (k >= n - 1)
            cout << n * (n - 1) / 2 << endl;
        else if (k == 2)
            cout << n << endl;
        else if (n % 2 == 0)
            cout << n + n * (k - 2) / 2 << endl;
        else
        {
            value = n;
            for (int i = 3; i <= k; i++)
            {
                if (i % 2 == 1)
                    value += (n - 1) / 2;
                else
                    value += (n + 1) / 2;
            }
            cout << value << endl;
        }
    }
    return 0;
}