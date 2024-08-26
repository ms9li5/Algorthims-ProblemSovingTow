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
    PrintDigit(ReadPositiveNumber());
    return 0;
}