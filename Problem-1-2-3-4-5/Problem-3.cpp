#include <iostream>
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
bool IsPrefectNumber(short Num)
{
    short sum = 0;
    for (int i = 1; i < Num; i++)
    {
        if (Num % i == 0)
        {
            sum += i;
        }
    }
    return Num == sum;
}
void PrintPrefectNumber(short Num)
{
    if (IsPrefectNumber(Num))
    {
        cout << Num << " Is Prefect Number." << endl;
    }
    else
    {
        cout << Num << " Is not Prefect Number." << endl;
    }
}
int main()
{
    PrintPrefectNumber(ReadPositiveNumber());
    return 0;
}