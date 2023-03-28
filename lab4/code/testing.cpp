#include <iostream>

using namespace std;

int main(){

    string l = "apples";
    string r = "oranges";

    int k;
    for( k = 0; l[k]; k++){
    }

    k = k-1;

    
    for(int i = 0; i < k; i++){
    for (int j = k; j < 100; j++)
    {
        l[j] = r[i];
    }
    };

    std :: cout <<  l;

    return 0;
}