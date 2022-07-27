#include <iostream>
#include <cmath>
using namespace std;

int main() {
float initialSavings;
float interestRate;
float currSavings;
int i;

cout << "Enter a number: ";
cin >> initialSavings;
cout << "Enter a number: ";
cin >> interestRate;

cout << "Annual savings for 10 years \n";
currSavings = initialSavings;

// Loop variable initialization
i = 0;

// Loop expression
while (i < 10) {
   cout << "$";
   cout << currSavings;
   cout << "\n";
   currSavings = currSavings + (currSavings * interestRate);
   //Loop variable update
   i = i + 1;
}

return 0;
}