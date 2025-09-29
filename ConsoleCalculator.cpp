#include <iostream>
#include <vector>
#include <cmath>

using namespace std;


int main(){

    char op;
    double num1;
    double num2;
    double result;
    char cont;

    cout << "********* CALCULATOR *********\n";

    do{cout << "Enter First Number: " << '\n';
    cin >> num1;

    cout << "Enter operation (+ - * /): " << '\n';
    cin >> op;

    cout << "Enter Second Number: " << '\n';
    cin >> num2;

    switch(op){
        case '+':
            result = num1 + num2;
            cout << "Result: " << result << '\n';
            cout << "Do you want to continue?(Y/N): " << '\n';
            cin >> cont;
            cont = toupper(cont);
            break;
        case '-':
            result = num1 - num2;
            cout << "Result: " << result << '\n';
            cout << "Do you want to continue?(Y/N): " << '\n';
            cin >> cont;
            cont = toupper(cont);
            break;
        case '/':
            result = num1 / num2;
            cout << "Result: " << result << '\n';
            cout << "Do you want to continue?(Y/N): " << '\n';
            cin >> cont;
            cont = toupper(cont);
            break;
        case '*':
            result = num1 * num2;
            cout << "Result: " << result << '\n';
            cout << "Do you want to continue?(Y/N): " << '\n';
            cin >> cont;
            cont = toupper(cont);
            break;
        default:
            cout << "There was an invalid operator." << '\n';
            cout << "Do you want to continue?(Y/N): " << '\n';
            cin >> cont;
            cont = toupper(cont);
            break;

    }} while(cont == 'Y');

    cout << "******************************\n";

    return 0;
}