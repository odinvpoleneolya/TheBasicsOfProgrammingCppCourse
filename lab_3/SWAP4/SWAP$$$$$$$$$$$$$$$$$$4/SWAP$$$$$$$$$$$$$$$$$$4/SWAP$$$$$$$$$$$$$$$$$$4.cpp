#include <iostream>
//declaring variables 
int A, B, C, D;
// reading the values of A and B of the keyboard 
int main()
{
    std::cout << "Enter A = ";
    std::cin >> A;
    std::cout << "Enter B = ";
    std::cin >> B;
    std::cout << "Enter C = ";
    std::cin >> C;
    std::cout << "Enter D = ";
    std::cin >> D;
    //output the values of variables for exchange 
    std::cout << "Before snap = A" << " , B" << " , C" << ", D ";

    //swapping the values of variables A, B und C
    int temp = A;
    A = D;
    C = B;
    D = C;
    B = temp;

    //output the values of variables after the exchange 
    std::cout << "Swap result is A = " << A << ", B = " << B << ", C = " << C << ", D = " << std::endl;
    return 0;
}