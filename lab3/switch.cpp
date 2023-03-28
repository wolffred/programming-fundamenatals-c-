#include <iostream>

int main(){

    float num1, num2;
    char op;

    std :: cout << "ENTER TWO NUMBERS: " << std :: endl;
    std :: cin >> num1;
    std :: cin >> num2;

    std :: cout << "ENTER AN OPERATOR: ";
    std :: cin >> op;


    switch(op){
        
        case '+':
        std :: cout << "Adding " << num1 << " and " << num2  << " = " << num1 + num2;
        break;

        case '-':
        std :: cout << "Subtracting " << num1 << " and " << num2  << " = " << num1 - num2;
        break;

        case '*':
        std :: cout << "Multiplying " << num1 << " and " << num2  << " = " << num1 * num2;
        break;

        case '/':
        std :: cout << "Dividing " << num1 << " and " << num2  << " = " << num1 / num2;
        break;

        default:
        std :: cout << "INVALID OPERATOR";

    }

    return 0;

}