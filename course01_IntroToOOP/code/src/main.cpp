#include <iostream>

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

const void printInvalidOption()
{
    std::cout << "You chose an invalid option. Try again, select option between 1-6." << std::endl;
}

void processMenuOption(const int &userInput)
{
    switch (userInput)
    {
        case 0:
            printInvalidOption();
            break;
        case 1:
            printHelp();
            break;
        case 2:
            printMarketStats();
            break;
        case 3:
            placeOffer();
            break;
        case 4:
            placeBid();
            break;
        case 5:
            printWallet();
            break;
        case 6:
            goToNextTimeframe();
            break;
        default:
            printInvalidOption();
    }
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

