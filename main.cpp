// Author: Jacob Christiansen
// Recitation: 104 – Vipra Gupta
//
// Assignment 5
//MAIN function

#include <iostream>
using namespace std;
#include "Assignment5.cpp";




//used for running and testing all the other functions
int main(){
int i[5]={2,3,1,5,4};
int i2[5]={1,1,1,1,1};
float f[5]={2.0,3.0,1.0,5.0,4.0};
float f2[5]={0.0,1.0,0.0,1.0,0.0};
float m[6]={10,14,40,61,104,200};

int r[7]={-5,-3,0,1,3,5,99};
string t[7]={"","","","","","",""};

cout << sumArray(f, 5) << endl;

cout << search(i, 5, 1) << endl;

cout << calculateDifference(i,i2,5) << endl;

sortArray(f, 5);
cout<<f[0]<<f[1]<<f[2]<<f[3]<<f[4]<<endl;

copyArray(f2, 5, f);
cout<<f[0]<<f[1]<<f[2]<<f[3]<<f[4]<<endl;

convert(r, t, 7);
cout<<t[0]<<t[1]<<t[2]<<t[3]<<t[4]<<t[5]<<t[6]<<endl;

cout << findMedian(m, 6) <<endl;

return 0;
}
