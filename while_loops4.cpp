/******************************************************************************

A user will enter an initial number, followed by that number of integers. Output those integers' sum.
Repeat until the initial number is 0 or negative. Ex: If the user enters 3 9 6 1 0, the output is: 16

Ex: If the user enters 3 9 6 1 2 5 3 0, the output is:
16
8
*******************************************************************************/

#include<iostream>
using namespace std;
int main(){
    
    int initialnumber=0;
    int i=0;
    int sum=0;
    int var=0;
    
    cin >> initialnumber;
    
    while(initialnumber>0){
        for(i=0; i<initialnumber;++i){
            cin >> var;
            sum=var+sum;
            //cout << sum;
            }
        cout << sum << endl;
        cin >> initialnumber;
        sum=0;
        var=0;
    }

    
    return 0;
}

/******************************************************************************