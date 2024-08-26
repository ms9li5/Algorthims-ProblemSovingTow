#include <iostream>
#include <string>
using namespace std;
short ReadPositiveNumber()
{
    float Num = 0;
    do
    {
        cout << "Enter the Positive Number: ";
        cin >> Num;
    } while (Num <= 0);
    return Num;
}
int ReverseNumber(int Num)
{
    int Num2 = 0, Remainder = 0;
    while (Num > 0)
    {
        Remainder = Num % 10;
        Num = Num / 10;
        Num2 = Num2 * 10 + Remainder;
    }
    return Num2;
}
void PrintDigit(int Num)
{
    int Remainder = 0;
    while (Num > 0)
    {
        Remainder = Num % 10;
        Num /= 10;
        cout << Remainder << endl;
    }
}
int main()
{
    PrintDigit(ReverseNumber(ReadPositiveNumber()));
    return 0;
}