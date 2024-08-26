#include <iostream>
using namespace std;
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
void FillArray(int ArrSource[100], int &ArrLength)
{
    ArrLength = 8;
    ArrSource[0] = 10;
    ArrSource[1] = 10;
    ArrSource[2] = 10;
    ArrSource[3] = 70;
    ArrSource[4] = 70;
    ArrSource[5] = 50;
    ArrSource[6] = 50;
    ArrSource[7] = 50;
}
void AddArrayElement(int Number, int arr[100], int &arrLength)
{
    // its a new element so we need to add the length by 1
    arrLength++;
    arr[arrLength - 1] = Number;
}
void PrintArray(int Arr[100], int ArrLength)
{
    for (int i = 0; i < ArrLength; i++)
    {
        cout << Arr[i] << " ";
    }
}
short FindPositionNumberInArray(int Number, int Arr[100], int ArrLength)
{
    for (int i = 0; i < ArrLength; i++)
    {
        if (Arr[i] == Number)
        {
            return i;
        }
    }
    return -1;
}
bool IsNumberInArray(short Number, int Arr[100], int ArrLength)
{
    return FindPositionNumberInArray(Number, Arr, ArrLength) != -1;
}
void CopyDistinctNumberToArray(int ArrSource[100], int ArrDestination[100], int ArrLength, int Arr2Length)
{
    for (int i = 0; i < ArrLength; i++)
    {
        if (!IsNumberInArray(ArrSource[i], ArrDestination, Arr2Length))
        {
            AddArrayElement(ArrSource[i], ArrDestination, Arr2Length);
        }
    }
}
int main()
{
    int Arr[100], Arr2[100], ArrLength = 0, Arr2Length = 0;
    FillArray(Arr, ArrLength);
    cout << "\nArray 1: ";
    PrintArray(Arr, ArrLength);
    CopyDistinctNumberToArray(Arr, Arr2, ArrLength, Arr2Length);
    cout << "\nArray 2: ";
    PrintArray(Arr2, Arr2Length);
    return 0;
}