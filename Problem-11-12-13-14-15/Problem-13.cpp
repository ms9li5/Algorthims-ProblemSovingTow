#include <iostream>
using namespace std;
short ReadPositiveNumber()
{
    short Num = 0;
    do
    {
        cout << "Enter the Positive Number: ";
        cin >> Num;
    } while (Num <= 0);
    return Num;
}
void PrintPatternNumber(short Num)
{
    for (int i = 1; i <= Num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << "\n";
    }
}
int main()
{
    PrintPatternNumber(ReadPositiveNumber());
    return 0;
}