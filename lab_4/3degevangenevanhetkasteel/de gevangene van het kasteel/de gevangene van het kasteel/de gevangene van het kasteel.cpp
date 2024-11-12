#include <iostream>
#include <string>

bool checkPassword(const std::string& input, const std::string& password) {
    // Compare the input string with the correct password
    return input == password;
}

int main() {
    const std::string password = "FR-33-DOM";
    std::string input;

    while (true) {
        std::cout << "Enter the password characters one by one:\n";
        input.clear();
        for (char c : password) {
            char userChar;
            std::cout << "Enter character: ";
            std::cin >> userChar;
            input += userChar;
            if (userChar != c) {
                std::cout << "Incorrect password, please try again.\n";
                break;
            }
        }

        if (checkPassword(input, password)) {
            std::cout << "Doors unlocked! You are free!\n";
            break;
        }
    }

    return 0;
}

