#include <iostream>
using namespace std;
#include <cstdlib> // rand() srand()
#include <ctime>   // time

int main() {
  // setup srand()
  srand(time(0));
  // variables
  int compMove = 0;
  char playerMove = 'r', reset = 'y';

  do {
    cout << "Enter R - rock, P - paper, S - scissors\n";
    cin >> playerMove;
    cout << endl;

    // 0 - Rock, 1 - Paper, 2 - Scissors
    compMove = rand() % 3;

    switch (playerMove) {
    case 'R':
    case 'r':
      cout << "You chose rock!\n";
      if (compMove == 0) {
        cout << "Tie!\nComputer chose rock.\n";
      } else if (compMove == 1) {
        cout << "Lose!\nComputer chose paper.\n";
      } else {
        cout << "Win!\nComputer chose scissors.\n";
      }
      break;
    case 'P':
    case 'p':
      cout << "You chose paper!\n";
      if (compMove == 0) {
        cout << "Win!\nComputer chose rock.\n";
      } else if (compMove == 1) {
        cout << "Tie!\nComputer chose paper.\n";
      } else {
        cout << "Lose!\nComputer chose scissors.\n";
      }
      break;
    case 'S':
    case 's':
      cout << "You chose scissors!\n";
      if (compMove == 0) {
        cout << "Lose!\nComputer chose rock.\n";
      } else if (compMove == 1) {
        cout << "Win!\nComputer chose paper.\n";
      } else {
        cout << "Tie!\nComputer chose scissors.\n";
      }
      break;
    default:
      cout << "Player entered invalid option\n";
      break;
    }
    cout << endl << "Reset?\n";
    cin >> reset;
  } while (reset == 'y' || reset == 'Y');
  return 0;
}