#include <iostream>
#include <cmath>
using namespace std;

int main() {
int currC;
float equivalentF;

// Loop variable initialization
currC = -10;

// Loop expression
while (currC <= 40) {
   equivalentF = (currC * 9.0 / 5.0) + 32.0;
   
   cout << currC;
   cout << " C it i";
   cout << equivalentF;
   cout << " F\n";
   
   // Loop variable update
   currC = currC + 5;
}

return 0;
}