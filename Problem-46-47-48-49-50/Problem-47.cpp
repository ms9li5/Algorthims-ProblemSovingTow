#include <iostream>
#include <cmath>
using namespace std;
float ReadNumber()
{
    float Num;
    cout << "Enter your Number : ";
    cin >> Num;
    return Num;
}
float GetFractionPart(float Num)
{
    return Num - int(Num);
}
float MyRound(float Num)
{
    int IntPart;
    IntPart = int(Num);
    float FractionPart = GetFractionPart(Num);
    if (abs(FractionPart) >= .5)
    {
        if (Num > 0)
        {
            return ++IntPart;
        }
        else
        {
            return --IntPart;
        }
    }
    else
    {
        return IntPart;
    }
}
int main()
{
    float Number = ReadNumber();
    cout << "My Round Function Result is: " << MyRound(Number) << endl;
    cout << "The C++ Function Result is : " << round(Number) << endl;
    return 0;
}