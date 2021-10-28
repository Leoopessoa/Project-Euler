/*
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.
*/

#include <iostream>

using namespace std;
bool palindrome(int);
bool is_palindrome(int num){ // Function that chech if the number is an palindrome
    int a, rev = 0;
    a = num;
    while(a){ // Revert the number
        rev = rev*10 + a%10;
        a /= 10;
    }
    if (rev == num){ // Check if the number is equal to its inverse
        return true;
    }
    return false;
};

int main(){
    int n1, n2;
    long long int result = 0, test = 0;
    for(n1 = 100; n1 <= 999; n1++){ // Loop that tests all the 3-digit numbers
        for(n2 = 100; n2 <=999; n2++){
            test = n1*n2;
            if(test > result){
                if(is_palindrome(test)){ // Checks if is the largest palindrome
                    result = test;
                }
            }
        }
    }
    cout <<"The largest palindrome made from the product of two 3-digit numbers is " << result << endl ;
    return 0;
}
