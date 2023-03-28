#include <iostream>

using namespace std;

void output(int a){
    cout << a << endl;
}

void output(char a){
    cout << a << endl;
}

void output(float a){
    cout << a + a<< endl;
}

void output(long a){
    cout << a + a + a<< endl;
}

void output(char a[100]){
    cout << a << a << endl;
}

int main(){

    char myname[] = "Ekow ";

    output(myname);



}