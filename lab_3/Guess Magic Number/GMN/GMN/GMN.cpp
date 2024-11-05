#include <iostream>

int main() {
    // Giving instructions to the user
    std::cout << "Think of a number.";
    std::cout << "Multiply it by 10.";
    std::cout << "Divide the result by 2.";
    std::cout << "Add the original number to the result.";

    // Asking for the result from the user
    int result;
    std::cout << "Enter the result you got: ";
    std::cin >> result;

    // Calculating the guessed number using the formula
    int guessedNumber = result / 6;

    // Outputting the guessed number
    std::cout << "Your original number was: " << guessedNumber << "!" << std::endl;

    return 0;
}
