#include <iostream>
using namespace std;
short ReadPositiveNumber()
{
    int Num = 0;
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
bool isPalindrome(int Num)
{
    return Num == ReverseNumber(Num);
}
void PrintPalindrome(int Num)
{
    if (isPalindrome(Num))
    {
        cout << "Yes, it is Palindrome number." << endl;
    }
    else
    {
        cout << "No, it is Not Palindrome number." << endl;
    }
}
int main()
{
    PrintPalindrome(ReadPositiveNumber());
    return 0;
}