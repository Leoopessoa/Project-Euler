/*
215 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26.

What is the sum of the digits of the number 21000?
*/

#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int main(){
    int i=0;
    double value = pow(2,1000), result = 0; // Variable Definition

    string a = to_string(value); // Converts the value of 2^1000 to a string so we can get the number digit by digit

    while(true){
        if (int(a[i]) >= int('0')){ // Since 46 is the value of the dot on the table of ASCII and 48 is the value of 0
        // we can use this condition to stop the sum before it include the value of dot
            result += int(a[i]) - '0'; // Since the value of 0 is 48, we can subtract it from the current term int value to get the correct int value 
            i++;
        }
       else    
            break; // Stops the loop if the condition is not matched (when the current term equals a dot)
    }

    cout << result << endl;
    return 0;
}
