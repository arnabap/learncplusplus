/******************************************************************************

Given an input positive integer, output each digit on its own line, starting with the rightmost digit. 
Ex: If the input is 935, the output is:

5
3
9
*******************************************************************************/

#include <iostream>
using namespace std;

int main() {

  int number,divisor;
  cin>> number;
  divisor=number;
  
  while(divisor!=0){
     
  cout << divisor%10<<endl;
  divisor= divisor/10;
  }
  // cout << number;
  return 0;
}
