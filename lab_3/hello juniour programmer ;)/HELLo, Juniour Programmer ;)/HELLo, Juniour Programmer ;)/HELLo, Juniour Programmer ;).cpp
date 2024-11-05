#include <iostream>
#include <string>

int main() {
    // Declaring variables to store name, age, and place of study
    std::string name;
    int age;
    std::string placeOfStudy;

    //asking the user for name
    std::cout << "What is your name? = ";
    std::getline(std::cin, name);  //using getline to read the full string

    //asking the user for their age
    std::cout << "How old are you? = ";
    std::cin >> age;

    // Clearing input buffer before reading the place of study
    std::cin.ignore();  // Clear the newline after entering the age

    // Asking the user for their place of study
    std::cout << "Where do you study? = ";
    std::getline(std::cin, placeOfStudy);  //reading full string for the place of study

    //outputting a greeting and the entered information
    std::cout << "Hello, " << name << "! You are " << age << " years old, and you study at " << placeOfStudy << "." << std::endl;

    return 0;
}