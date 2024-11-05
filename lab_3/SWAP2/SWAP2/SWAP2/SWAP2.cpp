

#include <iostream>

int main() {
   // declaring variables to store values A and B
    int A, B; 
    //reading the values of A and B of the keyboard 
    std::cout << "Enter A = "; 
    std::cin >> A;
    std::cout << "Enter B = "; 
    std::cin >> B;
    //output the values of variables for exchange 
    std::cout << "Before swap: A = " << A << ", B = " << B << std::endl;
    //swapping the values of variables A and B 
    int temp = A; 
    A = B;
        B = temp; 
        //output the values of variables after the exchange 
        std::cout << "Swap result is A = " << A << ", B = " << B << std::endl; 
        return 0; 

}


