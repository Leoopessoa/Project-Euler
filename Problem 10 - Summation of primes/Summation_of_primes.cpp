/*
The sum of the sums below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.
*/


#include <iostream>
#include <cmath>

using namespace std;

bool isprime(int num){ // Checks if the number is prime
    int i, a=0;
    for (i = 2; i <= sqrt(num)+1; i++){
        if (num%i==0)
            a++;
    }
    if(a == 0 || num == 2)
        return true;
    return false;
}

int main(){
    int i;
    long long int sum = 0; // Variable definition

    for(i = 2; i < 2000000; i++){
        if (isprime(i)){ // Sum the number to the total if it's prime
            sum += i;
        }
        
    }
    cout << "The sum of all prime numbers bellow 2 million is " << sum << endl;
    return 0;
}