#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
  srand(time(0)); // seed the random number generator

  int userChoice;
  int computerChoice;

  cout << "Welcome to Rock-Paper-Scissors!" << endl;
  cout << "Enter your choice (1 = Rock, 2 = Paper, 3 = Scissors): ";
  cin >> userChoice;

  // validate user input
  while (userChoice < 1 || userChoice > 3) {
    cout << "Invalid input. Please enter 1, 2, or 3: ";
    cin >> userChoice;
  }

  // generate computer's choice
  computerChoice = rand() % 3 + 1;

  // determine winner
  if (userChoice == computerChoice) {
    cout << "It's a tie!" << endl;
  } else if ((userChoice == 1 && computerChoice == 3) ||
             (userChoice == 2 && computerChoice == 1) ||
             (userChoice == 3 && computerChoice == 2)) {
    cout << "You win!" << endl << endl;
  } else {
    cout << "Computer wins!" << endl << endl;
  }

  // display choices
  cout << "You chose: ";
  switch (userChoice) {
    case 1:
      cout << "Rock" << endl;
      break;
    case 2:
      cout << "Paper" << endl;
      break;
    case 3:
      cout << "Scissors" << endl;
      break;
  }

  cout << "Computer chose: ";
  switch (computerChoice) {
    case 1:
      cout << "Rock" << endl;
      break;
    case 2:
      cout << "Paper" << endl;
      break;
    case 3:
      cout << "Scissors" << endl;
      break;
  }

  return 0;
}