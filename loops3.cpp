/******************************************************************************
Class 100920

*******************************************************************************/

///***************Print output- 5 10 15 20 **************/// 
#include <iostream>
#include<string>
using namespace std;

int main(){
int i = 0;
for (i=0; i<20; i++)
{
switch(i)
{
case 0:
      i += 5;
      break;
case 1:
      i += 2;
      break;
case 5:
      i += 5;
      break;
default:
     i += 4;
     break;
}
cout << i << " ";
}
return 0;
}
// ///*********************************************///

// ///***************Print output- 7 6 5 4 3 2 1 0 -1 **************///
// #include <iostream>
// #include<string>
// using namespace std;
// int main(){
// int n;
// for (n = 9; n!=0; n--)
// cout << n-2 << " ";
// return 0;
// }
///*********************************************///

// // ///***************Printing tables in this format **************///
// // // 1    2   3   4   5                                                                                                             
// // // 2    4   6   8   10                                                                                                            
// // // 3    6   9   12  15                                                                                                           
// // // 4    8   12  16  20                                                                                                          
// // // 5    10  15  20  25  
// // ///////////////////
// #include <iostream>
// #include<string>
// using namespace std;
// int main(){
//     int n;
//     //char z;
//     //cin>> n >> z;
// for(int i=1;i<=5;++i){
//     for(int j=1; j<=5;++j){
//         int z=i*j;
//         cout<<z<<"\t";
//     }
//     cout<< endl;
// }
// return 0;
// }
///*********************************************///
