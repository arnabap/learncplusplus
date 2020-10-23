//Quiz grading script
#include<iostream>
#include<fstream>
#include<string>
#include <sstream>
using namespace std;

int main()
{
	ifstream myfile ("quizresponse.txt");
	string line,name,lastname,q1,q2,q3,q4,q5,a1,a2,a3,a4,a5;

	string A("A");
	string B("B");
	string C("C");
	string D("D");


	//declare object
	ifstream file;

	//open file
	if (myfile.is_open())
  {
      cout<< "Correct Ans is: "<< B<<A<<A<<C<<C<<endl;

      
    while (getline (myfile,line))
    {
    //initialize variables
    int points=0, a1ans=0, a2ans=0, a3ans=0, a4ans=0, a5ans=0;
    
    //extract data
    stringstream iss(line);
    getline(iss, name, ' ');
    getline(iss, lastname, ' ');
    getline(iss, q1, '.');
    getline(iss, a1, ' ');
    getline(iss, q2, '.');
    getline(iss, a2, ' ');
    getline(iss, q3, '.');
    getline(iss, a3, ' ');
    getline(iss, q4, '.');
    getline(iss, a4, ' ');
    getline(iss, q5, '.');
    getline(iss, a5, ' ');

    cout << "Name: "<< name <<" "<< lastname<< " Answers are: "<<a1<<a2<<a3<<a4<<a5 << '\n';

     //compare answers
     if (a1==B){
         a1ans=1;
     }

     if (a2==A){
         a2ans=1;
     }
     if (a3==A){
         a3ans=1;
     }
     if (a4==C){
         a4ans=1;
     }
     if (a5==C){
         a5ans=1;
     }
     cout<<a1ans<<a2ans<<a3ans<<a4ans<<a5ans;
     points=a1ans+a2ans+a3ans+a4ans+a5ans;


   cout << "Points: "<<points<< endl;

    }
    myfile.close();
  }

  else cout << "Unable to open file";

	return 0;
}