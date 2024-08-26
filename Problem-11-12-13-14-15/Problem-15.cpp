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
void PrintLetterPattren(int Num)
{
    for (int i = 65; i <= 65 + Num - 1; i++)
    {
        for (int j = 1; i <= i - 65 + 1; i++)
        {
            cout << char(i);
        }
        cout << "\n";
    }
}
int main()
{
    PrintLetterPattren(ReadPositiveNumber());
    return 0;
}