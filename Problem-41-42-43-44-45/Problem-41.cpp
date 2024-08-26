#include <iostream>
using namespace std;
void ReadArray(int Arr[100], int &ArrLength)
{
    cout << "How do you want Length of array: ";
    cin >> ArrLength;
    cout << "Input Array Elements:" << endl;
    for (size_t i = 0; i < ArrLength; i++)
    {
        cout << "Element [" << i + 1 << "] : ";
        cin >> Arr[i];
    }
}

bool isPalindromeArray(int Arr[100], int ArrLength)
{
    for (int i = 0; i < ArrLength; i++)
    {
        if (Arr[i] != Arr[ArrLength - i - 1])
        {
            return false;
        }
    }
    return true;
}
void PrintPalindrome(int Arr[100], int ArrLength)
{

    if (isPalindromeArray(Arr, ArrLength))
    {
        cout << "Yes, it is Palindrome number." << endl;
    }
    else
    {
        cout << "No, it is Not Palindrome number." << endl;
    }
}
void PrintArray(int Arr[100], int ArrLength)
{
    for (int i = 0; i < ArrLength; i++)
    {
        cout << Arr[i] << " ";
    }
}
int main()
{
    cout << "==============================================\n";
    cout << "               Is Palindrome                  \n";
    cout << "==============================================\n";
    int Arr[100], ArrLength;
    ReadArray(Arr, ArrLength);
    cout << "\nArray Elements: ";
    PrintArray(Arr, ArrLength);
    cout << endl;
    PrintPalindrome(Arr, ArrLength);
    return 0;
}