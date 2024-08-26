#include <iostream>
#include <cmath>
using namespace std;
float MyABS(float Num)
{
    int N = 0;
    if (Num > N)
    {
        return Num;
    }
    else
    {
        return Num * -1;
    }
}
float ReadNumber()
{
    float Num;
    cout << "Enter your Number Negative: ";
    cin >> Num;
    return Num;
}
int main()
{
    float Num = ReadNumber();
    cout << "The MyABS Result: " << MyABS(Num) << endl;
    cout << "The Abs Result: " << abs(Num) << endl;
    return 0;
}