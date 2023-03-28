#include <iostream>

using namespace std;

int main(){

    int i = 5;

    int * p = &i;

    cout << p << endl;
    cout << i << endl;

    *p = 10;

    cout << p << endl;
    cout << i << endl;

    int **j = &p;
    int ***q = &j;
    int ****r = &q;

    cout << ***q << endl;

    return 0;
}