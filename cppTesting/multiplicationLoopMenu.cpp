#include <iostream>
using namespace std;
#include <cstdlib> // rand() & srand()
#include <ctime>   // time

int main() {
  // random number generator setup
  srand(time(0));
  // variable
  int random1 = 0, random2 = 0;
  int numCorrect = 0, totalProblems = 0, answer = 0;
  double percentage = 0; // for average correct
  char choice = 'y';

  do {
    random1 = rand() % 100; // gives values from 0 - 99
    random2 = rand() % 100;

    cout << "What is " << random1 << " x " << random2 << endl;
    cin >> answer;

    if (answer == (random1 * random2)) {
      cout << "Correct!\n";
      numCorrect++;
    } else {
      cout << "Wrong, answer should be: " << (random1 * random2) << endl;
    }
    totalProblems++;
    cout << "Do you want another problem? Y - yes\n";
    cin >> choice;
  } while (choice == 'y' || choice == 'Y');
  percentage = (static_cast<double>(numCorrect) / totalProblems) * 100;
  cout << "You got " << numCorrect << " correct answer(s) out of "
       << totalProblems << ". (" << percentage << "%)\n";
  return 0;
}