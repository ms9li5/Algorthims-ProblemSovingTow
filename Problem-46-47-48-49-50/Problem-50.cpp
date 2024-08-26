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
float MySqrt(float Num)
{
    return pow(Num, 0.5);
}
int main()
{
    float Number = ReadNumber();
    cout << "My Sqrt result is: " << MySqrt(Number) << endl;
    cout << "C++ Sqrt result is: " << sqrt(Number) << endl;
    return 0;
}