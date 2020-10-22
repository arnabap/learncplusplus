////***************************************************////

//Write a program to input grades from the user for n students. Find the max
//and average of the grades.


#include <iostream>
#include<string>
using namespace std;

int main()
{
    int counter=0,grades,total=0,max=0,n;
    double average;
    cout << "Enter number of students: ";
    cin>>n;
    
    do{
    cout << "Enter a grade: ";
    cin>>grades; 
    counter +=1;
    total= total + grades;
    if(grades>max){
        max=grades;
    }
    }    while(counter<n);
    
    average= total/counter;
    cout << "The max is : "<<max<<" and the average is :"<<average;
    return 0;
}

////***************************************************////

// // Same program using while loop only

// #include <iostream>
// #include<string>
// using namespace std;

// int main()
// {
//     int counter=0,grades,total=0,max=0,n;
//     double average;
//     cout << "Enter number of students: ";
//     cin>>n;
//         while(counter<n){
//         cout << "Enter a grade:";
//         cin >> grades;
//         total += grades;
//         counter += 1;
//         if(grades > max){
//             max = grades;
            
//         }
//         //cin>>grades; 
//     }
    
//     average= total/counter;
//     cout << "Max is: "<<max<<endl;;
//     cout << "Average is: "<<average;
    
//     return 0;
// }
////***************************************************////

