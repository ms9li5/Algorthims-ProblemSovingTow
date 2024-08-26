#include <iostream>
using namespace std;
enum enRockPaperScissor{Stone = 1,Paper = 2, Scissors = 3};
int RandomNumber(int From, int To)
{
    //Function to generate a random number
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}
int RaedRound()
{
    int Num;
    cout << "How many do you want Paly?" << endl;
    cin >> Num;
    return Num;
}
enRockPaperScissor ChecktheChoise(int Num)
{
    switch (Num)
    {
        case 1:
            return enRockPaperScissor::Stone;
        case 2:
            return enRockPaperScissor::Paper;
        case 3:
            return enRockPaperScissor::Scissors;
    }
}
void HowsWiner()
{

}
void ResultRound(int ChoisePlayer)
{
    cout << "\n========== Result Round ==========\n";
    cout << "Player Choise: " << ChecktheChoise(ChoisePlayer) << endl;
    cout << "Computer Choise: " << ChecktheChoise(RandomNumber(1, 3));

}
void theWindowPlayer(int Round, int& ChoisePlayer)
{
    for (int i = 0; i < Round; i++)
    {
        cout << "=== Round " << i + 1 << " begin: ===" << endl;
        cout << "Choose only one: ";
        cout << "[1] Stone, [2]Paper, [3]Scissors" << endl;
        cin >> ChoisePlayer;
        ResultRound(ChoisePlayer);
    }
}
void StartGame()
{
    int ChoidePlayer;
    int RoundNum = RaedRound();
    theWindowPlayer(RoundNum, ChoidePlayer);
}
int main()
{
    StartGame;
    return 0;
}