#include <iostream>
#include <cstdlib>
using namespace std;
int RandomNumber(int From, int To)
{
    int RandNum = rand() % (To - From + 1) + From;
    return RandNum;
}
void FillArrayWithRandomNumber(int Arr[100], int &ArrLength)
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
int MaxNumberOfArray(int Arr[100], int ArrLength)
{
    short Max = 0;
    for (int i = 0; i < ArrLength; i++)
    {

        if (Arr[i] > Max)
        {
            Max = Arr[i];
        }
    }
    return Max;
}
int main()
{
    srand((unsigned)time(NULL));

    int Arr[100], ArrLength;
    FillArrayWithRandomNumber(Arr, ArrLength);

    cout << "\nArray of Elements: ";

    PrintArray(Arr, ArrLength);

    cout << "\nMax Number is: ";
    cout << MaxNumberOfArray(Arr, ArrLength) << endl;
    return 0;
}