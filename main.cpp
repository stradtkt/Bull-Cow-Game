#include <iostream>
using namespace std;


int main() {
    constexpr int WORD_LENGTH = 5;
    cout << "Welcome to the Bulls and Cows game" << endl;
    cout << "Can you guess the " << WORD_LENGTH;
    cout << " letter isogram I'm thinking of?" << endl;
    cout << endl;

    cout << "Enter your guess: ";
    string Guess;
    cin >> Guess;
    cout << "Your guess was: " << Guess << endl;

    cout << endl;
    return 0;
}