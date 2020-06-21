#include<iostream>
using namespace std;
char num[100001], temp;
int main()
{
    int first_one(int,char[]);
    int first_zero(int,char[]);
    int number, num_one = 0, num_zero = 0, n = 0;
    cin >> number;
    getchar();
    while((temp=cin.get())!='\n')
        num[n++] = temp;
    num_one = first_one(number,num);
    num_zero = first_zero(number,num);
    cout << ((num_one < num_zero) ? num_one : num_zero);
    return 0;
}
int first_one(int number,char num[100001])
{
    int change_to_one = 0, change_to_zero = 0;
    for (int i = 0; i < number;i++)
    {
        if(i%2==0&&num[i]!='1')
            change_to_one++;
        else if(i%2==1&&num[i]!='0')
            change_to_zero++;
    }
    return (change_to_one > change_to_zero) ? change_to_one : change_to_zero;
}
int first_zero(int number,char num[100001])
{
    int change_to_one = 0, change_to_zero = 0;
    for (int i = 0; i < number;i++)
    {
        if(i%2==0&&num[i]!='0')
            change_to_zero++;
        else if(i%2==1&&num[i]!='1')
            change_to_one++;
    }
    return (change_to_one > change_to_zero) ? change_to_one : change_to_zero;
}