/*
A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

a2 + b2 = c2
For example, 32 + 42 = 9 + 16 = 25 = 52.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int a, b = 0, c, stop = 1, result; // Variable definition

    do{
        b++; // Loop for b value
        for(a = 1; a < b; a++){ // Loop for a value (establishing a < b)
            c = int(sqrt((a*a)+(b*b)));
            if((a+b+c) == 1000 && (c*c) == (a*a)+(b*b)){ // Tests if a,b and c are the values an Pythagorean triangle and their sum is 1000
                stop = 0; // Stops the while loop
                break; // Stops the for loop
            }
        }
    }while(stop);

    cout << "a = " << a << ", b = " << b << ", c = " << c << ";" << endl; // Print the values a, b and c 
    result = a*b*c; // Obtain the product abc

    cout << "The product abc is " << result << endl;
    return 0;
}