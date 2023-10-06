#include <iostream>
using namespace std;
// Add up numbers 1-10
// Goal: 1+2+3+4+5+6+7+8+9+10 with a loop
// total = 0;
// counter = 1;
// 'total is 0' + 1 = 1
// 'total is 1' + 2 = 3
// 'total is 3' + 3 = 6
// 'total is 6' + 4 = 10
// 'total is 10' + 5 = 15
const int STOP_NUMBER = 10;
int main() {
  int total = 0;
  int counter = 1;
  
  while (counter <= STOP_NUMBER)
    {
      total = total + counter;
      counter = counter + 1;
      cout << total << endl;
    }
    cout << "Total = " << total;
  return 0;
}