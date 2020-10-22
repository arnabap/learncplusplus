
// Write a program that asks the user to input a word that is 5 letters
//long. Have the user also input a single character. Search the input string
//for the number of occurences of the input character, output the number.
/////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include<string>
using namespace std;

int main()
{
    string word;
    char letter;
    int index=0, count=0;
    
    cin>> word>>letter;
    
    while(index<word.size()){
        if(letter == word.at(index)){
            count +=1;
        }
        index ++;
    }
    cout<<count;
    
    return 0;
}
