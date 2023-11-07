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
void printHelp() {
  std::cout << "Help - Your Aim is to make money. Analyze the market and "
               "make bids and offers."
            << std::endl;
}
void printMarketStats() { std::cout << "Market Looks good." << std::endl; }

void AcceptOffer() {

  std::cout << "Make an Offer - Enter the amount: " << std::endl;
}
void AcceptBid() {

  std::cout << "Make a bid - Enter the amount: " << std::endl;
}
void printWallet() { std::cout << "Your Wallet is emplty!" << std::endl; }
void progressTimeFrame() {

  std::cout << "Going to next time timeframe" << std::endl;
}
void handleUserChoice(int userChoice) {
  if (userChoice == 0) {
    std::cout << "Invalid Choice. Choose 1-6" << std::endl;
  }
  if (userChoice == 1) {
    printHelp();
  }
  if (userChoice == 2) {
    printMarketStats();
  }
  if (userChoice == 3) {
    AcceptOffer();
  }
  if (userChoice == 4) {
    AcceptBid();
  }
  if (userChoice == 5) {
    printWallet();
  }
  if (userChoice == 6) {
    progressTimeFrame();
  }
}
int main() {
  while (true) {
    printMenu();
    int choice = getUserChoice();
    handleUserChoice(choice);
  }
}