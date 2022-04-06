#include <iostream>

int main()
{
    const int SMALLPRICE = 25;
    const int LARGEPRICE = 35;
    const float TAXRATE = 0.06;
    const int expirationDays = 30;

    int numOfSmalls = 0;
    int numOfLarges = 0;
    int cost = 0;
    double total = 0.0;

    std::cout << "===================================================\n";
    std::cout << "Hello, welcome to Frank's Carpet Cleaning Service\n";

    std::cout << "How many small rooms would you like cleaned?: "; 
    std::cin >> numOfSmalls;

    std::cout << "How many large rooms would you like cleaned?: "; 
    std::cin >> numOfLarges;

    std::cout << "Estimate for carpet cleaning service\n";
    std::cout << "The number of small rooms " << numOfSmalls << std::endl;
    std::cout << "The number of large rooms " << numOfLarges << std::endl;

    std::cout << "Price per small room: $" << SMALLPRICE << std::endl;
    std::cout << "Price per large room: $" << LARGEPRICE << std::endl;

    cost = (numOfSmalls * SMALLPRICE) + (numOfLarges * LARGEPRICE);
    std::cout << "Cost = $" << cost << std::endl;

    double tax = cost * TAXRATE;
    std::cout << "Tax = $" << tax << std::endl;

    std::cout << "===================================================\n";

    total = cost + tax;
    std::cout << "Total Estimate = $" << total << std::endl;
    std::cout << "This estimate is valid for " << expirationDays << " days\n";

    return 0;
}