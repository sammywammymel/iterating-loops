#include <iostream>
#include <cmath>
using namespace std;

int main() {
int currValue;
int valuesSum;
int numValues;
int i;
float averageValue;

cout << "Enter a number: ";
cin >> numValues;
valuesSum = 0;

// Loop variable initialization
i = 0;

// Loop expression
while (i < numValues) {
    cout << "Enter a number: ";
    cin >> currValue;
   valuesSum = valuesSum + currValue;
   
   // Loop update
   i = i + 1;
}

averageValue = (1.0 * valuesSum) /  numValues;

cout << "Average: ";
cout << averageValue;

return 0;
}