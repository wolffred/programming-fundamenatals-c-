#include <iostream>

using namespace std;

int main(){

    char a[] = "orangess";

    

    a[8] = 'q';
    a[9] = 'q';

    //cout << a;

    string b = a;

    cout << b;

    for (int i = 0; a[i]; i++)
    {
        //std::cout << a[i] << std :: endl;
    }

    return 0;

}