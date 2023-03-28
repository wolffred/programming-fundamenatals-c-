#include <iostream>

using namespace std;

int input(){

    int num1;
    cout << "Enter first number: ";
    cin >> num1;

    int num2;
    cout << "Enter second number: ";
    cin >> num2;

    cout << num1 << endl;
    cout << num2 << endl;

    int num3 = num1 + num2;

    return num3;

}

int main(){

    cout << input();


    return 0;

}