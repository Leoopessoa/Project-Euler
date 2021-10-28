/* 
2520 is the smallest i that can be divided by each of the is from 1 to 10 without any remainder.

What is the smallest positive i that is evenly divisible by all of the is from 1 to 20?
*/

#include <iostream>

using namespace std;

int main(){
    int i = 1;
    while(true){ // The solution of this problem is to create an loop that checks if the number is divisible until it finds one that is
    // in this if's we are using first the prime numbers and then the other ones, since the primes can filter the results quicker 
        if(i%19 == 0){
            if(i%17 == 0){
                if(i%13 == 0){
                    if(i%11 == 0){
                        if(i%7 == 0){
                              if(i%5 == 0){
                                 if(i%3 == 0){
                                    if(i%2 == 0){
                                        if(i%20 == 0){
                                            if(i%18 ==0){
                                                if(i%16 == 0){
                                                    if(i%15 == 0){
                                                        if(i%14 == 0){
                                                            if(i%12 == 0){
                                                                if(i%10 == 0){
                                                                    if(i%9 == 0){
                                                                        if(i%8 == 0){
                                                                            if(i%6 == 0){
                                                                                if(i%4 == 0)
                                                                                    break;   
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }      
                                        }
                                    }
                                }
                            }
                        }                    
                    }
                }
            } 
        }
        i++;
    }
    cout << "The smallest positive i that is evenly divisible by all of the is from 1 to 20 is " << i << endl;
    return 0;
}