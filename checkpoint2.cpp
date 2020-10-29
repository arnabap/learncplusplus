
// Create a table that converts temperatures from Celsius to Fahrenheit

// Ask the user if they would like to know today's temperatures

// When "yes":
// Ask or their name -Generate a random number: use the length of their name (nameLngth) to set the seed
// Use the length of their name (nameLngth) as the starting point, and 99 as the ending point for a range of Celsius temperatures
// Output the range of Celsius temperatures alongside the Fahrenheit temperature conversions in a table
// When "no":
// Output "Goodbye userName "
// Hint: Run in submit mode to see the desired outputs before getting started

// Celsius to Fahrenheit : Fahrenheit = Celsius *180.0 /100 + 32

// Also based on the new Fahrenheit temperature output the appropriate statement below:

// When the number is less than 55: "carry a hat and gloves"
// When the number is less than 75: "carry a jacket"
// When the number is more than 75: "shorts it is"


#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
double x =0.0;
int y;
int a;
string name;
string answer;
 //cout << fixed <<setprecision(3);
cout << "Would you like to know today's temperature ranges? (yes/no) ";
    cin >> answer;

while(answer == "yes"){
    //string name;
    cout << "\nWhat is the users full name? ";
    cin >>name;
    a = name.size();
    cout << "\nYour name is " << a << " characters long.\n";
    
    //cout << fixed <<setprecision(2);
    srand(a);
    y = (rand()% (99-a +1)) + a;
    cout << "Your random number is: " << y << endl;  
    
for(double i=a; i <=y; ++i){
    cout << "Celcius: " << i;
    x= i * 180.0 / 100.0 +32;
    cout << "\tFahrenheit: " << x ;
        if(x> 75){
        cout << "\t shorts it is";
        }
        else if(x>55){
            cout << "\t carry a jacket";
        }
        else{
            cout <<"\t carry a hat and gloves";
        }
    cout << endl;
}
cout << "Would you like to know today's temperature ranges? (yes/no)";
    cin >> answer;
}
cout << "\nGoodbye " << name;
    return 0;
}

