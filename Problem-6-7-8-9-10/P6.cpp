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
int SumDigit(int Num)
{
    int Sum = 0, Remainder = 0;
    while (Num > 0)
    {
        Remainder = Num % 10;
        Num = Num / 10;
        Sum = Sum + Remainder;
    }
    return Sum;
}
int main()
{
    cout << SumDigit(ReadPositiveNumber());
    return 0;
}