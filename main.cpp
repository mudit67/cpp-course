#include <iostream>
void printMenu() {
  // 1 Print Help
  std::cout << "1: Print Help " << std::endl;
  // 2 Print exchange stats
  std::cout << "2: Print exchange stats " << std::endl;
  // 3 Make an offer
  std::cout << "3: Make an offer " << std::endl;
  // 4 Make a bid
  std::cout << "4: Make a bid " << std::endl;
  // 5 Print Wallet
  std::cout << "5: Print Wallet" << std::endl;
  // 6 Continue
  std::cout << "6 Continue" << std::endl;
  std::cout << "-----------------------" << std::endl;
}

int getUserChoice() {
  std::cout << "Enter your choice: ";
  int ch;
  std::cin >> ch;
  std::cout << "You Chose: " << ch << std::endl;
  return ch;
}
void handleUserChoice(int userChoice) {
  if (userChoice == 0) {
    std::cout << "Invalid Choice. Choose 1-6" << std::endl;
  }
  if (userChoice == 1) {
    std::cout << "Help - Your Aim is to make money. Analyze the market and "
                 "make bids and offers."
              << std::endl;
  }
  if (userChoice == 2) {
    std::cout << "Market Looks good." << std::endl;
  }
  if (userChoice == 3) {
    std::cout << "Make an Offer - Enter the amount: " << std::endl;
  }
  if (userChoice == 4) {
    std::cout << "Make a bid - Enter the amount: " << std::endl;
  }
  if (userChoice == 5) {
    std::cout << "Your Wallet is emplty!" << std::endl;
  }
  if (userChoice == 6) {
    std::cout << "Going to next time timeframe" << std::endl;
  }
}
int main() {
  while (true) {
    printMenu();
    int choice = getUserChoice();
    handleUserChoice(choice);
  }
}