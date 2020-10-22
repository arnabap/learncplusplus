/******************************************************************************

Print/down count even numbers from n barring the negative.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
  int n;
  int i;

  cout << "Enter an integer:" << endl;
  cin >> n;
    //cout << "Integer:" << n << endl;
  cout << "Sequence: ";
  if(n<0){
      n=0;
  }
  
  else if ((n%2)!=0) {
      n--;
      }
     
    
  for(i=n;i>=0; i-=2){
         cout << i<< "\t";
         // cout <<i;
      }
     
  return 0;
  
}
