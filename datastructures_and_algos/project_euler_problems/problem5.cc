// 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

// What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
#include <iostream>
using namespace std;



int main() {
    long int lcm;
    long int iterations = 0;
    bool multiple = true;
    for (long int i = 2520; i <= 1e9; i += 2520) {

       for (int j = 11; j <=19; j++) {
           iterations++;
           if (i%j != 0) {
               multiple = false;
               break;
           }
           if (j == 19) {
               lcm = i; 
               goto done;
           }
       }
    } 
    done:
    cout << "The lcm of the numbers 1 - 20 is " << lcm << endl;
    cout << "That took " << iterations << " iterations" << endl;   
    return 0;
}