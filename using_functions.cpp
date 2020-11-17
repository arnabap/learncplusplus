/******************************************************************************

Define a function PrintFeetInchShort, with int parameters numFeet and numInches,
that prints using ' and " shorthand. End with a newline. 
Ex: PrintFeetInchShort(5, 8) prints: 5' 8"
*******************************************************************************/

// #include<iostream>
// using namespace std;

// void PrintFeetInchShort(int numFeet , int numInches){

// cout<< numFeet<<"' "<<numInches<<"\""<<endl;
// }

// int main(){

//    int userFeet;
//    int userInches;

//    cin >> userFeet;
//    cin >> userInches;

//    PrintFeetInchShort(userFeet, userInches); 

//    return 0;
// }

/******************************************************************************
Assign to maxSum the max of (numA, numB) PLUS the max of (numY, numZ). 

*******************************************************************************/
// #include<iostream>
// using namespace std;

// double maxfind(double num1, double num2){
// double max;
// if(num1>num2){
//     max=num1;
// }
// else
// {
//     max=num2;
// }
// return max;
// }



// int main() {
//    double numA;
//    double numB;
//    double numY;
//    double numZ;
//    double maxSum;

//    cin >> numA;
//    cin >> numB;
//    cin >> numY;
//    cin >> numZ;


//    maxSum=maxfind(numA,numB)+maxfind(numY,numZ);

//    cout << "maxSum is: " << maxSum << endl;

//    return 0;
// }

/******************************************************************************
One lap around a standard high-school running track is exactly 0.25 miles. 
Write a program that takes a number of miles as input, and outputs the number of laps.
Output each floating-point value with two digits after the decimal point.
*******************************************************************************/
// #include<iostream>
// #include<iomanip>
// using namespace std;

// double mtol(double miles){
// return miles/0.25;

// }

// int main(){
//     double miles;
//     cin>>miles;
//     cout<<fixed<<setprecision(2);
//     cout<<"Laps"<<mtol(miles);


// }

/******************************************************************************
Write a function MaxMagnitude() with two integer input parameters that returns the largest 
magnitude value. Use the function in a program that takes two integer inputs, 
and outputs the largest magnitude value.
*******************************************************************************/
// #include<iostream>
// #include<cmath>
// using namespace std;

// int MaxMagnitude(int num1,int num2);

// int main(){
// int a=0,b=0;
// cin >> a >>b;
// cout<< MaxMagnitude(a,b);

// }


// int MaxMagnitude(int num1,int num2){
//     int max=0;
// if(abs(num1)>abs(num2)){
// max=abs(num1);


// }
// else {
// max=abs(num2);
// cout<<max<<endl;
// }
    
// return max;
// }

/******************************************************************************
Write a program that simulates flipping a coin to make decisions. The input is how 
many decisions are needed, and the output is either heads or tails. Assume the input is a value greater than 0.

Ex: If the input is:

3
the output is:

heads
tails
heads
*******************************************************************************/

// #include<iostream>
// #include <random>
// using namespace std;

// void Outcome(int input);

// int main(){
// int number=0;
// cout<< "Enter number of outcomes"<<endl;
// cin>> number;

// Outcome(number);
// return 0;
// }

// void Outcome(int input){
// int i,out;
// srand(2);

// if(input>0){
// for(i=0; i<input; ++i) {

// out=0 + rand() % (( 1 + 1 ) - 0);

// if(out==0){
//     cout<< "heads"<<endl;
// }
// else{
//     cout<< "tails"<<endl;
// }
    
// }
// }
// else{
// cout<<"Enter a non-negative number greater than zero"<<endl;
// }

// }

/******************************************************************************
Write a function Ascend3 with three integer reference parameters, that sorts the 
values into ascending order. Ex: If x = 5, y = 2, and z = 7, after the call Ascend3(x, y, z), the new values 
will be x = 2, y = 5, and z = 7.
*******************************************************************************/