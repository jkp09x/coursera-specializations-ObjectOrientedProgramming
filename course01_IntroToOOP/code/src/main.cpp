#include <iostream>

int main () {
    int userInput(0);
    double bidAmount, askAmount;
    /*
    Print Menu:
        1. Print help
        2. Print exchange stats
        3. Place an ask
        4. Place a bid
        5. Print wallet
        6. Continue
    */
    while(true) {
        std::cout << "1: Print help" << std::endl;
        std::cout << "2: Print exchange stats" << std::endl;
        std::cout << "3: Place an ask" << std::endl;
        std::cout << "4: Place a bid" << std::endl;
        std::cout << "5: Print wallet" << std::endl;
        std::cout << "6: Continue" << std::endl;

        std::cout << "Type in 1-6" << std::endl;
        std::cin >> userInput;
        std::cout << "You chose: " << userInput << std::endl;

        switch(userInput) {
            case 1:
                std::cout << "Help - choose options from the menu" << std::endl;
                std::cout << "and follow the on screen instructions." << std::endl;
                break;
            case 2:
                std::cout << "1.00 USD = 84.07 INR" << std::endl;
                std::cout << "1.00 USD =  0.77 GBP" << std::endl;
                std::cout << "1.00 USD =  0.92 EUR" << std::endl;
                break;
            case 3:
                std::cout << "Select amount to place an ask (in USD):" << std::endl;
                std::cin >> askAmount;
                askAmount *= 1.0;
                std::cout << "You chose to place an ask for " << askAmount << " USD." << std::endl;
                break;
            case 4:
                std::cout << "Select amount to place a bid (in USD):" << std::endl;
                std::cin >> bidAmount;
                bidAmount *= 1.0;
                std::cout << "You chose to place a bid for " << bidAmount << " USD." << std::endl;
                break;
            case 5:
                std::cout << "Your wallet is currently empty." << std::endl;
                break;
            case 6:
                std::cout << "Continue" << std::endl;
                break;
            default:
                std::cout << "You chose an invalid option. Try again, select option between 1-6." << std::endl;
                break;
        }
    }
    return 0;
}
