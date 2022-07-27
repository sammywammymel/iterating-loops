#include <iostream>
#include <cmath>
using namespace std;

int main() {
int maxSoFar;
int currValue;
int numValues;
int i;

maxSoFar = 0;
cout << "Enter a number: ";
cin >> numValues;

// Loop variable initialization
i = 0;

// Loop expression
while (i < numValues) {
    cout << "Enter a number: ";
    cin >> currValue;

   // First iteration
   if (i == 0) {
      maxSoFar = currValue;
   }else if (currValue > maxSoFar) {
      maxSoFar = currValue;
   }
   //Loop variable update
   i = i + 1;
}
cout << "Max: ";
cout << maxSoFar;

return 0;
}