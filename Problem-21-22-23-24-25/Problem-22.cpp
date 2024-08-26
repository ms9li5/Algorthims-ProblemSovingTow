#include <iostream>
using namespace std;
int ReadPositiveNumber(string Message)
{
    int Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}
void ReadArray(int Arr[100], int &ArrLength)
{
    cout << "Enter the Lenght of Array: ";
    cin >> ArrLength;

    cout << "Enter the Element for Array: " << endl;
    for (int i = 0; i < ArrLength; i++)
    {
        cout << "Element [" << i + 1 << "] : ";
        cin >> Arr[i];
    }
}
void PrintArray(int Arr[100], int ArrLength)
{
    for (int i = 0; i < ArrLength; i++)
    {
        cout << Arr[i] << " ";
    }
}
int TimesRepeated(int Number, int Arr[100], int ArrLenght)
{
    short Count = 0;
    for (int i = 0; i <= ArrLenght; i++)
    {
        if (Arr[i] == Number)
        {
            Count++;
        }
    }
    return Count;
}
int main()
{
    int Arr[100], ArrLength, NumberToCheck;
    ReadArray(Arr, ArrLength);
    NumberToCheck = ReadPositiveNumber("Enter the Number do you want to check");
    cout << "The Orginal Array: " << endl;
    PrintArray(Arr, ArrLength);
    cout << "\nThe Number " << NumberToCheck << " Repeated for " << TimesRepeated(NumberToCheck, Arr, ArrLength) << " Time(s)." << endl;
    return 0;
}