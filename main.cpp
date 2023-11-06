#include <iostream>

int main() {
  while (true) {

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
    std::cout << "Enter your choice: ";

    int choice;

    std::cin >> choice;

    std::cout << "You Chose: " << choice << std::endl;

    if (choice == 0) {
      std::cout << "Invalid Choice. Choose 1-6" << std::endl;
    }
    if (choice == 1) {
      std::cout << "Help - Your Aim is to make money. Analyze the market and "
                   "make bids and offers."
                << std::endl;
    }
    if (choice == 2) {
      std::cout << "Market Looks good." << std::endl;
    }
    if (choice == 3) {
      std::cout << "Make an Offer - Enter the amount: " << std::endl;
    }
    if (choice == 4) {
      std::cout << "Make a bid - Enter the amount: " << std::endl;
    }
    if (choice == 5) {
      std::cout << "Your Wallet is emplty!" << std::endl;
    }
    if (choice == 6) {
      std::cout << "Going to next time timeframe" << std::endl;
    }
  }
}