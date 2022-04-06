#include <iostream>

int main()
{
    const int PRICE = 30;
    const float TAXRATE = 0.06;
    const int expirationDays = 30;

    int numOfRooms = 0;
    int cost = 0;
    double total = 0.0;

    std::cout << "Enter the number of rooms to clean: "; 
    std::cin >> numOfRooms;

    std::cout << "The number of rooms to clean: " << numOfRooms << std::endl;
    std::cout << "The price per room: $" << PRICE << std::endl;

    cost = numOfRooms * PRICE;
    std::cout << "Cost = " << numOfRooms << " x " << PRICE << " = $" << cost << std::endl;

    double tax = cost * TAXRATE;
    std::cout << "Tax = " << cost << " x " << TAXRATE << " = $" << tax << std::endl;

    std::cout << "===================================================\n";

    total = cost + (cost * TAXRATE);
    std::cout << "Total Estimate = " << cost << " + " << tax << " = $" << total << std::endl;

    std::cout << "This estimate is valid for " << expirationDays << " days\n";

    return 0;
}