/* 
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?
*/

#include <iostream>

using namespace std;

bool isPrime(int num){ // Checks if the number is prime
    int i, a=0;
    for (i = 1; i <= num; i++){
        if (num%i==0)
            a++;
    }
    if(a == 2)
        return true;
    return false;
}

int main(){
    int i = 1, n = 0;
    long long int prime; // Variable definition

    while(i){
        if (isPrime(i)){ // Add 1 to n variable if the number is prime
            n++;
        }
        prime = i;
        i++;
        if (n == 10001)
            i = 0; // Ends the loop if n is the 10001th prime
    }
    cout << "The 10 001st prime number is " << prime << endl;
    return 0;
}