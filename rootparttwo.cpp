//Exercise 4: Square Root, Babylonian Style - Extended

#include <iostream>
#include <cmath>
using namespace std;

double genNewGuess(double n, double oldGuess){
    return (oldGuess + n / oldGuess) / 2;
}


double babylonianRoot(double num){

    double guess;

    if (num < 0) {
        return 0;
    }

    if (num == 0) {
        return 0;
    }

    guess = num / 2;
   
    double nextGuess = genNewGuess(num, guess);
    while ((abs(abs(nextGuess/guess) - 1)) > 0.01) {
        guess = nextGuess;
        nextGuess = genNewGuess(num, guess);
    }
    nextGuess = genNewGuess(num, guess);

    return nextGuess;
}

int main(){
    char continueLoop = 'y';
    while (continueLoop == 'y'){
        double n; 
        cout << "enter a value: ";
        cin >> n;
        double result = babylonianRoot(n);
        cout << "The square root of n is: " << result << endl;
        cout << "Do you want to continue? (y/n): ";
        cin >> continueLoop;
    }
}