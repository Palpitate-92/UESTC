#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        long long n, F, F_judge = 0;
        cin >> n >> F;
        if ((2 * n - 1) > F)
        {
            cout << "-1\n";
            continue;
        }
        for (int i = 1; i < n; i++)
            F_judge += i * (n - i + 1) * 2 - i;
        if ((F - F_judge) > (n - 1))
            for (int i = 1; i < n; i++)
                cout << i << " ";
        else
        {
            cout << "-1\n";
            continue;
        }
        cout << F - F_judge << endl;
    }
    return 0;
}