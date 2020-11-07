#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int> num{37,81,-47,15,90,-243,49};
    
  int count=0;

    for(int i = 0; i<num.size(); ++i){
      if( num.at(i) < 0){
          count++;
          }
    }
    cout << count;
    
    return 0;
}
