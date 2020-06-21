#include <iostream>
using namespace std;
int main()
{
    int N;
    while ((cin >> N) && N)
    {
        int red = 0, yellow = 0;
        char temp;
        N--;
        cin.ignore();
        while (N--)
        {
            temp = cin.get();
            if (temp == 'R')
                red++;
            else if (temp == 'Y')
                yellow++;
        }
        temp = cin.get();
        cin.ignore();
        if ((temp == 'B' && red == 7) || (temp == 'L' && yellow != 7))
        {
            cout << "Red\n";
            continue;
        }
        else
        {
            cout << "Yellow\n";
            continue;
        }
    }
    return 0;
}