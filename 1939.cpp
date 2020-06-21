#include <iostream>
using namespace std;
int main()
{
    int T;
    int Remainder_3(int);
    cin >> T;
    while (T--)
    {
        int a, b, m, n;
        cin >> a >> b >> m;
        while (m--)
        {
            int Remain_n, Remain_n_1, Value_judge;
            cin >> n;
            if (!n)
                Value_judge = a;
            else
            {
                Remain_n = Remainder_3(n);
                Remain_n_1 = Remainder_3(n - 1);
                Value_judge = Remain_n * b + Remain_n_1 * a;
            }
            if (Value_judge % 3)
                cout << "No\n";
            else
                cout << "Yes\n";
        }
        puts("");
    }
}
int Remainder_3(int Divisor)
{
    int Remain;
    switch (Divisor % 8)
    {
    case 0:
        Remain = 0;
        break;
    case 1:
        Remain = 1;
        break;
    case 2:
        Remain = 1;
        break;
    case 3:
        Remain = 2;
        break;
    case 4:
        Remain = 0;
        break;
    case 5:
        Remain = 2;
        break;
    case 6:
        Remain = 2;
        break;
    case 7:
        Remain = 1;
        break;
    }
    return Remain;
}