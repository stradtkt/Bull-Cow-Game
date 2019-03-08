#include <iostream>
#include <string>
#include "FBullCowGame.h"
using namespace std;
using FText = std::string;
using int32 = int;

void PrintIntro();
string GetGuessAndPrintBack();

FBullCowGame BCGame;
int main() {
    PrintIntro();
    constexpr int NUMBER_OF_TURNS = 5;
    for(int count; count <= NUMBER_OF_TURNS; count++) {
        GetGuessAndPrintBack();
        cout << endl;
    }
    cout << endl;
    return 0;
}

void PrintIntro() {
    constexpr int WORD_LENGTH = 5;
    cout << "Welcome to the Bulls and Cows game" << endl;
    cout << "Can you guess the " << WORD_LENGTH;
    cout << " letter isogram I'm thinking of?" << endl;
    cout << endl;
}

string GetGuessAndPrintBack() {
    cout << "Enter your guess: ";
    string Guess;
    getline(cin, Guess);
    cout << "Your guess was: " << Guess << endl;
    return Guess;
}