/******************************************************************************

Suppose a launched toy rocket's height is computed as h = vi*t - 5t2. vi is the initial velocity, and t is time in seconds 
since the launch (starting at 0). Write a program to read the initial velocity, then output the time and the rocket's height 
once per second. Stop when the height would be negative, meaning the rocket hit the ground (don't print the negative). Assume all
values are integers. Ex: For input 20, the output is:

0 0
1 15
2 20
3 15
4 0
*******************************************************************************/

#include <iostream>
using namespace std;

int main() {
  int rocketHeight = 0; 
  int initialVelocity = 0;
  int timeSinceLaunch = 0; 
   cout << "Enter the initiial velocity of the rocket: "<< endl;
   cin >> initialVelocity;

  while(rocketHeight>=0){
      
       
      cout<< timeSinceLaunch<< "\t" <<rocketHeight<< endl;
      timeSinceLaunch++;
      rocketHeight = initialVelocity*timeSinceLaunch - (5*timeSinceLaunch*timeSinceLaunch);
    }

  return 0;
}