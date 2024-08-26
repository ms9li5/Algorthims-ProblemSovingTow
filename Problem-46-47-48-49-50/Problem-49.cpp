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
float MyCeil(float Num)
{
    if (abs(GetFractionPart(Num)) > 0)
    {
        if (Num > 0)
        {
            return int(Num) + 1;
        }
        else
        {
            return int(Num);
        }
    }
    else
    {
        return int(Num);
    }
}
int main()
{
    float Number = ReadNumber();
    cout << "My Ceil Function Result is: " << MyCeil(Number) << endl;
    cout << "The C++ ceil Function Result is : " << ceil(Number) << endl;
    return 0;
}