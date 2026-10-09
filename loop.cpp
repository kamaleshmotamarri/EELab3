//Warm-up Exercise 1: Loop Equivalence


#include <iostream>
using namespace std;

int main (){

    int total = 0;
    for (int i = 0; i < 100; i++){
        total += i;
    }
    cout << "The total is: " << total << endl;

    return 0;
}