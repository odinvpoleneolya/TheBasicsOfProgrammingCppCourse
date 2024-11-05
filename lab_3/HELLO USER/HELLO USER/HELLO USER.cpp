

#include <iostream>
#include <string>
int main() {
//creating a variable to save the name 
	std::string name; 
	//asking user name
	std::cout << "What's your name? = ";
	std::getline(std::cin, name); //Using getline to read the whole line
	//Question output 
	std::cout << " Hello, " << name << "!" << std::endl;
	return 0;
}



