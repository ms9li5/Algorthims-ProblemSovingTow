#include <iostream>
using namespace std;
int ReadNumber()
{
    int Num = 0;
    cout << "Enter the Number: ";
    cin >> Num;
    return Num;
}
void AddArrayElement(int Number, int arr[100], int &arrLength)
{
    // its a new element so we need to add the length by 1
    arrLength++;
    arr[arrLength - 1] = Number;
}
void InputUserInArray(int Arr[100], int &ArrLength)
{
    bool AddMore = true;
    do
    {
        AddArrayElement(ReadNumber(), Arr, ArrLength);
        cout << "Do you want to add more numbers? [0] : No,[1] : yes ? ";
        cin >> AddMore;
    } while (AddMore);
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
    int Arr[100], ArrLength = 0;
    InputUserInArray(Arr, ArrLength);
    cout << "Array Length: " << ArrLength << endl;
    cout << "Array Elements: ";
    PrintArray(Arr, ArrLength);
    return 0;
}