#include <iostream>
#include <vector>
#include <cmath>


int main(){

    char op;
    double num1;
    double num2;
    double result;
    char cont;

    std::cout << "********* CALCULATOR *********\n";

    do{std::cout << "Enter First Number: " << '\n';
    std::cin >> num1;

    std::cout << "Enter operation (+ - * /): " << '\n';
    std::cin >> op;

    std::cout << "Enter Second Number: " << '\n';
    std::cin >> num2;

    switch(op){
        case '+':
            result = num1 + num2;
            std::cout << "Result: " << result << '\n';
            std::cout << "Do you want to continue?(Y/N): " << '\n';
            std::cin >> cont;
            break;
        case '-':
            result = num1 - num2;
            std::cout << "Result: " << result << '\n';
            std::cout << "Do you want to continue?(Y/N): " << '\n';
            std::cin >> cont;
            break;
        case '/':
            result = num1 / num2;
            std::cout << "Result: " << result << '\n';
            std::cout << "Do you want to continue?(Y/N): " << '\n';
            std::cin >> cont;
            break;
        case '*':
            result = num1 * num2;
            std::cout << "Result: " << result << '\n';
            std::cout << "Do you want to continue?(Y/N): " << '\n';
            std::cin >> cont;
            break;
        default:
            std::cout << "There was an invalid operator." << '\n';
            std::cout << "Do you want to continue?(Y/N): " << '\n';
            std::cin >> cont;
            break;

    }} while(cont == 'Y' || cont == 'y');

    std::cout << "******************************\n";


    system("pause");

    return 0;
}