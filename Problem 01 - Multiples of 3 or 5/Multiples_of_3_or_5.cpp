/* If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000. 
*/

#include <iostream>

using namespace std;

int main(){
    
    int i, num = 1000; // Variables definition 
    long int total = 0;

    for(i=1; i < num ; i++){ // For loop that tests all numbers to the limit given 
        if(i%3 == 0 || i%5 == 0){ 
            total += i; // Add the number to the total if the condition is satisfied
        }
    }
    cout << "The sum of these multiples is " << total << endl; 
    return 0;
}