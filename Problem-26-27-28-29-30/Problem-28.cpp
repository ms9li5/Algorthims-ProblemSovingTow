#include <iostream>
#include <cstdlib>
using namespace std;
int RandomNumber(int From, int To)
{
    int RandNum = rand() % (To - From + 1) + From;
    return RandNum;
}
void FillArrayWithRandomNumber(int Arr[100], int Arr2[100], int &ArrLength)
{
    cout << "Enter the Length of Array: ";
    cin >> ArrLength;
    for (int i = 0; i < ArrLength; i++)
    {
        Arr[i] = RandomNumber(1, 100);
    }
}
void PrintArray(int Arr[100], int ArrLength)
{
    for (int i = 0; i < ArrLength; i++)
    {
        cout << Arr[i] << " ";
    }
}
void CopyArray(int ArrSource[100], int ArrDestination[100], int ArrLength)
{
    for (int i = 0; i < ArrLength; i++)
    {
        ArrDestination[i] = ArrSource[i];
    }
}
int main()
{
    srand((unsigned)time(NULL));

    int Arr[100], ArrLength, Arr2[100];
    FillArrayWithRandomNumber(Arr, Arr2, ArrLength);
    CopyArray(Arr, Arr2, ArrLength);
    cout << "\nArray 1 Elements: ";
    PrintArray(Arr, ArrLength);
    cout << "\nArray 2 elements after copy: ";
    PrintArray(Arr2, ArrLength);
    return 0;
}