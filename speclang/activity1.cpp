#include <iostream>
#include <cmath>
using namespace std;

int main() {
int userNum;
int curPower;

curPower = 2;
cout << "Enter a number: ";
cin >> userNum;

while (userNum == 1) {
   cout << curPower;
   cout << "\n";
   curPower = curPower * 2;
   cout << "Enter a number: ";
   cin >> userNum;
}

cout << "Done.";
return 0;
}