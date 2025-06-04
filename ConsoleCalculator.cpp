#include <iostream>
#include <vector>
#include <cmath>


int main(){

    char op;
    double num1;
    double num2;
    double result;

    std::cout << "********* CALCULATOR *********\n";

    std::cout << "Enter First Number: " << '\n';
    std::cin >> num1;

    std::cout << "Enter operation (+ - * /): " << '\n';
    std::cin >> op;

    std::cout << "Enter Second Number: " << '\n';
    std::cin >> num2;

    switch(op){
        case '+':
            result = num1 + num2;
            std::cout << "Result: " << result << '\n';
            break;
        case '-':
            result = num1 - num2;
            std::cout << "Result: " << result << '\n';
            break;
        case '/':
            result = num1 / num2;
            std::cout << "Result: " << result << '\n';
            break;
        case '*':
            result = num1 * num2;
            std::cout << "Result: " << result << '\n';
            break;
        default:
            std::cout << "There was an invalid operator." << '\n';
            break;

    }

    std::cout << "******************************\n";


    system("pause");

    return 0;
}