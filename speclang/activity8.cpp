#include <iostream>
#include <cmath>
using namespace std;

int FindGCD(int aVal, int bVal) {
   int numA;
   int numB;
   int gcdVal;
   
   numA = aVal;
   numB = bVal;
   
   // Euclid's algorith
   while (numA != numB){
      if (numB > numA) {
         numB = numB - numA;
      }else{
         numA = numA - numB;
      }
   }
   gcdVal = numA;
   
return gcdVal;
}
int FindLCM(int aVal, int bVal) {
    int lcmVal;
    lcmVal = abs(aVal * bVal) / FindGCD(aVal, bVal);
    return lcmVal;
}

int main(){
   int usrNumA;
   int usrNumB;
   int lcmResult;
   
   cout << "Enter a number: ";
   cin >> usrNumA;
      cout << "Enter a number: ";
   cin >> usrNumB;
   lcmResult = FindLCM(usrNumA, usrNumB);
   cout << "Least common multiple of ";
   cout << usrNumA;
   cout << " and ";
   cout << usrNumB;
   cout << " is ";
   cout << lcmResult; 

   return 0;
}