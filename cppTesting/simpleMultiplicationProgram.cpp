#include <iostream>
using namespace std;

int main() {
  char repeat = 'y';
  int num1 = 0, num2 = 0;
  while (repeat == 'Y' || repeat == 'y')
  {
    cout << "Enter two numbers to multiply\n";
    cout << "First number: ";
    cin >> num1;
  
    cout << "Second number: ";
    cin >> num2;

    //display result
    cout << num1 << " * " << num2 << " = " << (num1 * num2) << endl;
    cout << "Do you want to repeat? Y - yes\n";
    cin >> repeat;
  }
  return 0;
}