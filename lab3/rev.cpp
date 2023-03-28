#include <iostream>

using namespace std;

int main(){

    char name;

    char bar[100];

    int position = 0;

    cout << "ENTER TEXT: ";


    while(cin.get(name)){
        bar[position] = name;
        position++;
    }


    char newname[100];

    int length = 0;

    for(int i = 0; bar[i]; i++){
        length++;
    }

    cout << length << endl;

    int new_len = length - 1;

    for(int j = 0; j <= new_len; j++){
        newname[j] = bar[new_len - j];
    }

    for(int k = 0; k <= new_len; k++){
        cout << newname[k];
    }





    return 0;

}