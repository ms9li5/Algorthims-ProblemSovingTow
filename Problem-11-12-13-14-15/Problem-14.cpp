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
void PrintInvertedLetterPattern(int Number)
{
    cout << "\n";
    for (int i = 65 + Number - 1; i >= 65; i--)
    {
        for (int j = 1; j <= Number - (65 + Number - 1 - i); j++)
        {
            cout << char(i);
        }
        cout << "\n";
    }
}
int main()
{
    PrintInvertedLetterPattern(ReadPositiveNumber());
    return 0;
}