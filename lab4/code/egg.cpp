#include <iostream>

using namespace std;


int main(){

    const char *l = "hello";

    const char *r = "he";


    int i;
    for( i = 0; l[i]; i++){
        cout << l[i] << endl;
    }

    int j;
    for( j = 0; r[j]; j++){
        cout << r[j] << endl;
    }

    if(i == j){
        int result = 0;
        cout << "0";
    }else if(i<j){
        int result = -1;
        cout << "-1";
    }else if(i>j){
        int result = 1;
        cout << "1";
    }



    return 0;

}