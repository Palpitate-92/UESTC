#include <cmath>
#include <iostream>
using namespace std;
char Direct[100001];
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int x_Axis, y_Axis, time, time_count = 0;
        char x_direct, y_direct;
        bool judge = false;
        cin >> x_Axis >> y_Axis >> time >> Direct;
        if(x_Axis==0&&y_Axis==0)
        {
            cout << "0\n";
            continue;
        }
        x_direct = (x_Axis > 0) ? 'R' : 'L';
        y_direct = (y_Axis > 0) ? 'U' : 'D';
        if (x_Axis == 0)
            x_direct = 'N';
        if (y_Axis == 0)
            y_direct = 'N';
        x_Axis = abs(x_Axis);
        y_Axis = abs(y_Axis);
        while (time_count < time)
        {
            if (Direct[time_count] == x_direct)
                x_Axis--;
            if (Direct[time_count] == y_direct)
                y_Axis--;
            if (x_Axis <= 0 && y_Axis <= 0)
            {
                judge = true;
                break;
            }
            time_count++;
        }
        if(judge)
            cout << time_count + 1 << endl;
            else
                cout << "-1\n";
    }
    return 0;
}