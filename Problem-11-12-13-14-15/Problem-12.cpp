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
void invertedPattern(short Num)
{
    for (int i = Num; i > 0; i--)
    {
        cout << "\n";
        for (int j = i; j > 0; j--)
        {
            cout << i;
        }
        cout << endl;
    }
}
int main()
{
    invertedPattern(ReadPositiveNumber());
    return 0;
}