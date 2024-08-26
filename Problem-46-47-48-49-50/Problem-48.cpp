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

float MyFloor(float Num)
{
    if (Num > 0)
    {
        return int(Num);
    }
    else
    {
        return int(Num) - 1;
    }
}
int main()
{
    float Number = ReadNumber();
    cout << "My Floor Function Result is: " << MyFloor(Number) << endl;
    cout << "The C++ Floor Function Result is : " << floor(Number) << endl;
    return 0;
}