#include <iostream>

using namespace std;

int main(){

    char array[] {"hello"};

    char *p{array};


    cout << &array[2] << endl;

    cout << p+2 << endl;

    if (&array[2] != (p+2))
        cout << "wierd";
    else
        cout << "good";

    return 0;
}