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
    return -1;
}
bool IsNumberInArray(short Number, int Arr[100], int ArrLength)
{
    return FindPositionNumberInArray(Number, Arr, ArrLength) != -1;
}
void PrintArray(int Arr[100], int ArrLength)
{
    for (int i = 0; i < ArrLength; i++)
    {
        cout << Arr[i] << " ";
    }
}
void PrintNumber(short Number, int Arr[100], int ArrLength)
{
    if (!IsNumberInArray(Number, Arr, ArrLength))
    {
        cout << "No, the Number is not found" << endl;
    }
    else
    {
        cout << "Yes, the Number is found" << endl;
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
    PrintNumber(Number, Arr, ArrLength);
    return 0;
}