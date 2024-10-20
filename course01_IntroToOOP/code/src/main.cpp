#include <iostream>
#include <limits> // for  td::numeric_limits
#include <map> // for storing unction pointers

void printMenu()
{
    std::cout << "1: Print help" << std::endl;
    std::cout << "2: Print exchange stats" << std::endl;
    std::cout << "3: Place an ask" << std::endl;
    std::cout << "4: Place a bid" << std::endl;
    std::cout << "5: Print wallet" << std::endl;
    std::cout << "6: Continue" << std::endl;
}

void getUserOption(int &userInput)
{
    std::cout << "Type in 1-6" << std::endl;
    std::cin >> userInput;
    // Handle invalid input from user (non-numeric input)
    if (std::cin.fail())
    {
      // Clear CIN stream
      std::cin.clear();
      // Ignore remaining cin buffer
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    }
    std::cout << "You chose: " << userInput << std::endl;
}

void printHelp()
{
    std::cout << "Help - choose options from the menu" << std::endl;
    std::cout << "and follow the on screen instructions." << std::endl;
}
void printMarketStats()
{
    std::cout << "1.00 USD = 84.07 INR" << std::endl;
    std::cout << "1.00 USD =  0.77 GBP" << std::endl;
    std::cout << "1.00 USD =  0.92 EUR" << std::endl;
}

void placeOffer()
{
    std::cout << "You selected to place an ask (in USD):" << std::endl;
}

void placeBid()
{
    std::cout << "You selected to place a bid (in USD):" << std::endl;
}

void printWallet()
{
    std::cout << "Your wallet is currently empty." << std::endl;
}

void goToNextTimeframe()
{
    std::cout << "Continue to next timeframe." << std::endl;
}

void printInvalidOption()
{
    std::cout << "You chose an invalid option. Try again, select option between 1-6." << std::endl;
}

void processMenuOption(const int &userInput)
{
  // Using map to store function pointers
  std::map<int, void (*)()> menu;

  menu[0] = printInvalidOption;
  menu[1] = printHelp;
  menu[2] = printMarketStats;
  menu[3] = placeOffer;
  menu[4] = placeBid;
  menu[5] = printWallet;
  menu[6] = goToNextTimeframe;

  if (userInput >= 1 && userInput <= 6)
    menu[userInput]();
  else
    menu[0]();
}

int main () {
    int userInput(0);
    double bidAmount, askAmount;
    
    while(true) {
        printMenu();
        getUserOption(userInput);
        processMenuOption(userInput);
    }
    return 0;
}

