#include <iostream>

int Favdrink;

int main()
{
    std::cout << "What is your favorite drink? \n";
    std::cout << "1. Coffe \n";
    std::cout << "2. Tea \n";
    std::cout << "3. Coca Cola \n";
    std::cout << "Please choose either 1, 2 or 3. \n";
    std::cin >> Favdrink;

    if (Favdrink == 1) {
        std::cout << "Coffee is delicious \n";
    }
    if (Favdrink == 2) {
        std::cout << "Tea gives peace of mind \n";
    }
    if (Favdrink == 3) {
        std::cout << "Coke will give you a white smile \n";
    }
}
