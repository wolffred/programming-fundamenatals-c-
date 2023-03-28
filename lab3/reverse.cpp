#include <iostream>

using namespace std;

int main(){

    string name;

    cout << "ENTER TEXT: ";
    getline(cin, name);
    string newname;

    int length = 0;

    for(int i = 0; name[i]; i++){
        length++;
    }

    cout << length << endl;

    int new_len = length - 1;

    for(int j = 0; j <= new_len; j++){
        newname[j] = name[new_len - j];
    }

    for(int k = 0; k <= new_len; k++){
        cout << newname[k];
    }





    return 0;

}