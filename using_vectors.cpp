/////////////////////////////////////////////////////////////////
// //In class activity- Print largest number of vector
/////////////////////////////////////////////////////////////////

// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//   vector<int> num{37,81,47,15,90,243,49};
    
//   int maxval=0;

//     for(int i = 0; i<num.size(); ++i){
//       if( num.at(i) > maxval){
//           maxval = num.at(i);
//           }
//     }
//     cout << maxval;
    
//     return 0;
// }

/////////////////////////////////////////////////////////////////
//In class activity- Take input from user, print the numbers
// and print largest number of vector
/////////////////////////////////////////////////////////////////

// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//   int maxval=0;
//   int numbers;
  
//   cout<<"How many numbers do you wish to compare: "<<endl;
//     cin>> numbers;
  
//   vector <int> num (numbers);
  
  
//     cout<< "Enter the numbers in the vector: "<< endl;
//         for(int i=0; i < num.size(); ++i){
//          //cout << "Value: ";
//          cin >> num.at(i);       
//         }
//     cout<< "The numbers in the vector are: "<< endl;
//         for(int i=0; i < num.size(); ++i){
//           cout << num.at(i) << "\t"; 
//         }
    
//     for(int i = 0; i<num.size(); ++i){
//       if( num.at(i) > maxval){
//           maxval = num.at(i);
//           }
//     }
    
//     cout<<"\n"<< "Max number is: ";
//     cout << maxval;
    
//     return 0;
// }



// /////////////////////////////////////////////////////////////

// //In class activity- Print total number of negative numbers in a vector

// /////////////////////////////////////////////////////////////

// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//   vector<int> num{37,81,-47,15,90,-243,49};
    
//   int count=0;

//     for(int i = 0; i<num.size(); ++i){
//       if( num.at(i) < 0){
//           count++;
//           }
//     }
//     cout << count;
    
//     return 0;
// }


////////////////////////////////////////////////////////////////

//In class activity swap numbers to print max value of a vector. 

////////////////////////////////////////////////////////////////

// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     vector<int> num{37,81,-47,15,90,43,-49};

//   int temp=0;

//     for(int i = 0; i < num.size()-1; ++i){
//       if( num.at(i) > num.at(i+1)){
//           temp = num.at(i);
//           num.at(i)=num.at(i+1);
//           num.at(i+1)=temp;
//           // cout << num.at(i+1);
//       }

//     }


//         cout<<"Max number is: "<<num.back()<<endl;
//       // OR use
//      // cout<< num.at(num.size()-1)<<endl;

   

//     return 0;
// }

// ////////////////////////////////////////////////////////////////
// // Compute the average of the vector's element values. 
////////////////////////////////////////////////////////////////

// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//   const int VALS_SIZE = 6;
//   vector<int> valsVctr(VALS_SIZE);
//   unsigned int i;
//   int sumVal;
//   int avgVal;

//   valsVctr.at(0) = 30;
//   valsVctr.at(1) = 20;
//   valsVctr.at(2) = 20;
//   valsVctr.at(3) = 15;
//   valsVctr.at(4) = 5;
//   valsVctr.at(5) = 10;

//   sumVal = 0;
//   avgVal = 0;
//   /* FIXME: Write for loop to iterate through vector */
//   for(int i=0; i<valsVctr.size(); ++i){
//   sumVal=sumVal+ valsVctr.at(i);
//   }
      
//   avgVal = sumVal / VALS_SIZE;
   
//   cout << "Avg: " << avgVal << endl;

//   return 0;
// }
// 

////////////////////////////////////////////////////////////////

// Assign numMatches with the number of elements in userValues that equal matchValue. userValues has NUM_VALS elements. 
// Ex: If userValues is {2, 2, 1, 2} and matchValue is 2 , then numMatches should be 3.

////////////////////////////////////////////////////////////////

// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//   const int NUM_VALS = 4;
//   int matchValue;
//   unsigned int i;
//   int numMatches = 0; // Assign numMatches with 0 before your for loop
//   vector<int> userValues(NUM_VALS);

//     cout<<"Enter matchValue: "<<endl;       
//   cin >> matchValue;
//   cout<<"\n";
   
//   cout<<"Enter values: "<<endl;
//   for (i = 0; i < userValues.size(); ++i) {
//       cin >> userValues.at(i);
//       if(matchValue== userValues.at(i)){
//       numMatches++;
//   }
//   }

//   cout << "matchValue: " << matchValue << ", numMatches: " << numMatches << endl;

//   return 0;
// }

////////////////////////////////////////////////////////////////

//Write a for loop to populate vector userGuesses with NUM_GUESSES integers. 
//Read integers using cin. Ex: If NUM_GUESSES is 3 and user enters 9 5 2, then userGuesses is {9, 5, 2}.
////////////////////////////////////////////////////////////////

// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//    const int NUM_GUESSES = 3;
//    vector<int> userGuesses(NUM_GUESSES);
//    unsigned int i;
//    //bool verify= false;

//   for (i = 0; i < userGuesses.size(); ++i) {
//       cin >> userGuesses.at(i);
//    }
//   cout << "{";
//    for (i = 0; i < userGuesses.size(); ++i) {
      
//       if(i != 0){
//               cout << ",";
//               }              
            
//        cout << userGuesses.at(i);
//    }
//   cout << "}"<<endl;

//    return 0;
// }

////////////////////////////////////////////////////////////////

//Write a program to input course grades from user and print them in
//a line and in reverse
////////////////////////////////////////////////////////////////
// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//    const int NUM_VALS = 4;
//    vector<int> courseGrades(NUM_VALS);
//    int i;

//    for (i = 0; i < courseGrades.size(); ++i) {
//       cin >> courseGrades.at(i);
//    }

//    /* Your solution goes here  */
//    for (i = 0; i < (int) courseGrades.size(); ++i) {
//    cout << courseGrades.at(i) << " " ;
// }
// cout << endl;

// for (i = courseGrades.size() - 1; i >= 0; --i) {
//    cout << courseGrades.at(i) << " " ;
// }
// cout << endl;

//    return 0;
// }

////////////////////////////////////////////////////////////////

// Vector testGrades contains NUM_VALS test scores. Write a for loop that sets 
// sumExtra to the total extra credit received. Full credit is 100, so anything over 100 is extra credit. 
// Ex: If testGrades = {101, 83, 107, 90}, then sumExtra = 8, because 1 + 0 + 7 + 0 is 8.

////////////////////////////////////////////////////////////////

// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//    const int NUM_VALS = 4;
//    vector<int> testGrades(NUM_VALS);
//    unsigned int i;
//    int sumExtra=0;
//    int Extra = 0; 

//    for (i = 0; i < testGrades.size(); ++i) {
//       cin >> testGrades.at(i);
//    }

//    for (i = 0; i < testGrades.size(); ++i) {
//       if(testGrades.at(i)>100){
//          Extra=testGrades.at(i)-100;
//          sumExtra=sumExtra+Extra;
//       }
//    }

//    cout << "sumExtra: " << sumExtra << endl;
//    return 0;
// }

// ////////////////////////////////////////////////////////////////

// Write a for loop to print all NUM_VALS elements of vector hourlyTemp. 
// Separate elements with a comma and space. Ex: If hourlyTemp = {90, 92, 94, 95}, 
// print:
// 90, 92, 94, 95
// ////////////////////////////////////////////////////////////////

#include <iostream>
#include <vector>
using namespace std;

int main() {
   const int NUM_VALS = 4;
   unsigned int i;
   vector<int> hourlyTemp(NUM_VALS);

   for (i = 0; i < hourlyTemp.size(); ++i) {
      cin >> hourlyTemp.at(i);
   }


for (i = 0; i < hourlyTemp.size(); ++i) {
   if (i != 0) { // Not first, so include separating comma and space
      cout << ", ";
   }
   cout << hourlyTemp.at(i);
}
   cout << endl;

   return 0;
}