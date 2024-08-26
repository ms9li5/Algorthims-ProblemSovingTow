#include <iostream>
#include <cstdlib>
using namespace std;
int ReadPositiveNumber(string message)
{
    int Num = 0;
    do
    {
        cout << message;
        cin >> Num;
    } while (Num <= 0);
    return Num;
}
int RandomNumber(int From, int To)
{
    // Function to generate a random number
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}
void FillArrayWithRandomNumbers(int arr[100], int &arrLength)
{
    cout << "\nEnter number of elements:\n";
    cin >> arrLength;
    for (int i = 0; i < arrLength; i++)
        arr[i] = RandomNumber(1, 100);
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
    return 0;
}
void PrintArray(int Arr[100], int ArrLength)
{
    for (int i = 0; i < ArrLength; i++)
    {
        cout << Arr[i] << " ";
    }
}
void PrintNumber(short PositionNumber)
{
    if (PositionNumber == 0)
    {
        cout << "The Number isn't found:-(" << endl;
    }
    else
    {
        cout << "The Number found at position: " << PositionNumber << endl;
        cout << "The Number found it's order: " << PositionNumber + 1 << endl;
    }
}
int main()
{
    srand((unsigned)time(NULL));
    int Arr[100], ArrLength;
    FillArrayWithRandomNumbers(Arr, ArrLength);
    cout << "\nArray 1: ";
    PrintArray(Arr, ArrLength);
    cout << endl;
    short Number = ReadPositiveNumber("Enter a Number to Serach for: ");
    cout << "The Number you are looking for is: " << Number << endl;
    short PositionNumber = FindPositionNumberInArray(Number, Arr, ArrLength);
    PrintNumber(PositionNumber);
    return 0;
}