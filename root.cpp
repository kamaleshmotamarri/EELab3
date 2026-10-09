//Exercise 3: Square Root, Babylonian Style

#include <iostream>
#include <cmath>
using namespace std;

double genNewGuess(double n, double oldGuess){
    return (oldGuess + n / oldGuess) / 2;
}

int main (){
    double num;
    double guess;
    cout << "Enter the Number to find square root:";
    cin >> num;

    if (num < 0) {
        cout << "Invalid Input" << endl;
        return 0;
    }

    if (num == 0) {
        cout << "Guessing..." << endl;
        cout << 0 << endl;
        cout << "The Final Guess: 0" << endl;
        cout << "Actual Value: 0" << endl;
        return 0;
    }

    guess = num / 2;
    cout << "Guessing..." << endl;
    cout << guess << endl;

    double nextGuess = genNewGuess(num, guess);
    while ((abs(abs(nextGuess/guess) - 1)) > 0.01) {
        guess = nextGuess;
        cout << guess << endl;
        nextGuess = genNewGuess(num, guess);
    }
    cout << "The Final Guess: " << nextGuess << endl;
    cout << "Actual Value: " << sqrt(num) << endl;

    return 0;
}