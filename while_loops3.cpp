/******************************************************************************

Reverse a string

*******************************************************************************/
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i;
    string name;

    cout << "Please enter the name.\n";
    getline(cin, name);

    while(name!="q" && name!="quit" ){
    
    for(i = name.length()-1; i >= 0; i--){
        cout << name.at(i);
    }
    cout<<endl;
    cout<< "Do you want to enter another text or type 'q or quit' to exit?\n ";
    getline(cin, name);

    } 
    return 0;
}

