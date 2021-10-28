/*
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/

#include <iostream>

using namespace std;

int main(){
    int i = 2;
    long long int num = 600851475143; // Variables definition
    while(num != i ){ // Stops when the divider and numerator are equal
        while(num%i == 0){ // Loop that divides the number to obtain the prime
            num /= i;
        }
        i++; 
    }
    cout << "The largest prime factor of the number 600851475143 is " << num << endl;
    return 0;
}