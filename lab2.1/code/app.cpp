#include <iostream>

using namespace std;

int strlen(int str){

    


}

int main(){

    string sent;

    cout << "ENTER A SENTENCE: ";
    cin >> sent;

    //int size = strlen(sent);

    for (int i = 0; i <=30; i++){

        if(sent[i] == '-'){
            cout << endl;
        }else{
            cout << sent[i];
        }

    }

    return 0;

}