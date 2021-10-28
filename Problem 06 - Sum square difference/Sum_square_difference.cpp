/*
The sum of the squares of the first ten natural numbers is, 1^2 + 2^2 + ... 10^2 = 385

The square of the sum of the first ten natural numbers is, (1 + 2 + 3 ... 10)^2 = 3025

Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 - 385 = 2640.

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
*/

#include <iostream>

using namespace std;

int main(){
    int i;
    long long int result, sum1 = 0, sum2 = 0; // Variable definitions

    for(i = 1; i <= 100; i++){ // Sum of the squares
        sum1 += i*i;
    }
    cout << sum1 << endl;
    for(i = 1; i <= 100; i++){ // Sum of the terms
        sum2 += i;
    }
    sum2 = sum2*sum2; // Square of the sum
    cout << sum2 << endl;
    result = sum2 - sum1; // Diference between 

    cout << "The difference between the sum of the squares of the first one hundred natural numbers and the square of the sum is " << result << endl;
    return 0;
}