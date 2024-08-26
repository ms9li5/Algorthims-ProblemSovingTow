#include <iostream>
#include <string>
using namespace std;
int ReadPositiveNumber(string Message)
{
    int Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}
int CountDigitFrequency(short DigitToCheck, int Number)
{
    int FreqCount = 0, Remainder = 0;
    while (Number > 0)
    {
        Remainder = Number % 10;
        Number = Number / 10;
        if (DigitToCheck == Remainder)
        {
            FreqCount++;
        }
    }
    return FreqCount;
}
int main()
{
    int Number = ReadPositiveNumber("Enter the Number: ");
    short DigitToCheck = ReadPositiveNumber("Enter one Digit to check ");
    cout << "\nDigit " << DigitToCheck << " Frequency is " << CountDigitFrequency(DigitToCheck, Number) << " Time(s)." << endl;
    return 0;
}