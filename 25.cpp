#include <iostream>
#include <string>
using namespace std;
int main()
{
    int N;
    while ((cin >> N) && N)
    {
        int score_Group[18], str_length, count = 0, first_Group = 0, second_Group = 0, N_temp = N;
        cin.ignore();
        while (N_temp--)
        {
            string str_Orgin;
            getline(cin, str_Orgin);
            str_length = str_Orgin.length();
            if ((str_length > 8) && (str_Orgin[str_length - 8] == ' ' && str_Orgin[str_length - 7] == 'n' && str_Orgin[str_length - 6] == 'o' && str_Orgin[str_length - 5] == ' '))
                score_Group[count++] = 0;
            else
                score_Group[count++] = 1;
        }
        for (int i = 1; i <= (N + 1) / 2; i++)
            cout << i << " ";
        cout << "Score\n";
        for (int i = 0; i < N; i += 2)
        {
            if (score_Group[i])
            {
                cout << "O ";
                first_Group++;
            }
            else
                cout << "X ";
        }
        cout << first_Group << endl;
        for (int i = 1; i < N; i += 2)
        {
            if (score_Group[i])
            {
                cout << "O ";
                second_Group++;
            }
            else
                cout << "X ";
        }
        if (N % 2)
            cout << "- " << second_Group << endl;
        else
            cout << second_Group << endl;
    }
    return 0;
}