#include <unistd.h>
#include <term.h>
#include <iostream>
using namespace std;

void ClearScreen()
{
    if (!cur_term)
    {
        int result;
        setupterm(NULL, STDOUT_FILENO, &result);
        if (result <= 0)
            return;
    }

    putp(tigetstr("clear"));
}

void printMenu()
{
    // 1 print Help
    std::cout << "1: Print help " << std::endl;

    // 2 print exchange stats
    std::cout << "2: Print exchange stats" << std::endl;
    // 3 make an offer
    std::cout << "3: Make an offer" << std::endl;
    // 4. make a bid
    std::cout << "4: Make a bid " << std::endl;
    // 5. print wallet
    std::cout << "5: Print wallet" << std::endl;
    // 6. continue
    std::cout << "6: Continue " << std::endl;

    std::cout << "================ " << std::endl;
}

void printHelp()
{
    std::cout << "Help - Your aim is to make money. Analyze the market, and make bids and offers  " << std::endl;
}

int getUserOption()
{
    int userOption;
    std::cout << "Type in 1-6:  ";
    std::cin >> userOption;
    std::cout << "You chose: " << userOption << std::endl;

    return userOption;
}

void printMarketStats() { std::cout << "Market looks good" << std::endl; }
void enterOffer() { std::cout << "Make and offer" << std::endl; }
void enterBid() { std::cout << "Make a bid - enter the amount" << std::endl; }
void printWallet() { std::cout << "Your wallet is empty." << std::endl; }
void gotoNextTimeFrame() { std::cout << "Going to next time frame." << std::endl; }

void processUserOption(int userOption)
{
    if (userOption == 0)
        std::cout << "Invalid choice. Choose 1-6" << std::endl;
    if (userOption == 1)
        printHelp();

    if (userOption == 2)
        printMarketStats();
    if (userOption == 3)
        enterOffer();
    if (userOption == 4)
        enterBid();
    if (userOption == 5)
        printWallet();
    if (userOption == 6)
        gotoNextTimeFrame();
}

int main()
{
    ClearScreen();
    while (true)
    {

        printMenu();
        int userOption = getUserOption();
        processUserOption(userOption);
    }
    return 0;
}