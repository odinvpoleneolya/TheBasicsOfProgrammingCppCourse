#include <iostream>
#include <string>

std::string describeTemperature(double temp) {
    // Checking temperature ranges and returning appropriate messages
    if (temp < -30) {
        return "Very cold: extremely dangerous.";
    }
    else if (temp >= -30 && temp < 0) {
        return "Cold: need to bundle up.";
    }
    else if (temp >= 0 && temp <= 25) {
        return "Comfortable temperature: it's safe to go out.";
    }
    else if (temp > 25 && temp <= 40) {
        return "Warm: can go out, but be cautious.";
    }
    else {
        return "Very hot: extremely dangerous.";
    }
}

int main() {
    double temperature;
    std::cout << "Enter temperature input in Celsius: "; // Asking for temperature input
    std::cin >> temperature;

    std::string result = describeTemperature(temperature);
    std::cout << result << std::endl; // Printing the result

    return 0;
}



