#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int hour, minute, diff, gcd;
        cin >> hour;
        cin.ignore();
        cin >> minute;
        if (hour > 12)
            hour -= 12;
        hour *= 30;
        minute *= 6;
        diff = abs(12 * hour - 11 * minute);
        if (diff == 0)
        {
            cout << "0\n";
            continue;
        }
        else if (diff > 2160)
            diff = 4320 - diff;
        gcd = __gcd(diff, 12);
        if (gcd == 12)
            cout << diff / gcd << endl;
        else
            cout << diff / gcd << "/" << 12 / gcd << endl;
    }
    return 0;
}