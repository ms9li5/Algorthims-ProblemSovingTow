#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
enum enCharType
{
    SmallLetter = 1,
    CapitalLetter = 2,
    SpecialCharacter = 3,
    Digit = 4
};
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
int RandomNumber(int From, int To)
{
    // Function to generate a random number
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}
char GetRandomCharacter(enCharType CharType)
{
    switch (CharType)
    {
    case enCharType::SmallLetter:
        return char(RandomNumber(97, 122));
    case enCharType::CapitalLetter:
        return char(RandomNumber(65, 90));
    case enCharType::SpecialCharacter:
        return char(RandomNumber(33, 47));
    case enCharType::Digit:
        return char(RandomNumber(48, 57));
    }
}
string GenerateWord(enCharType CharType, short Length)
{
    string word;
    for (int i = 0; i <= Length; i++)
    {
        word += GetRandomCharacter(CharType);
    }
    return word;
}
string GenerateKey()
{
    string Key = "";
    Key = GenerateWord(enCharType::CapitalLetter, 4) + "-";
    Key = Key + GenerateWord(enCharType::CapitalLetter, 4) + "-";
    Key = Key + GenerateWord(enCharType::CapitalLetter, 4) + "-";
    Key = Key + GenerateWord(enCharType::CapitalLetter, 4);
    return Key;
}
void FillArrayWithKeys(string Arr[100], int ArrLength)
{
    for (int i = 0; i < ArrLength; i++)
    {
        Arr[i] = GenerateKey();
    }
}
void PrintStringArray(string Arr[100], int ArrLength)
{
    for (int i = 0; i < ArrLength; i++)
    {
        cout << "Array [" << i << "] : ";
        cout << Arr[i] << "\n";
    }
    cout << "\n";
}
int main()
{
    srand((unsigned)time(NULL));
    string Arr[100];
    int ArrLength = 0;
    ArrLength = ReadPositiveNumber("Enter How many Keys Generate");
    FillArrayWithKeys(Arr, ArrLength);
    PrintStringArray(Arr, ArrLength);
    return 0;
}