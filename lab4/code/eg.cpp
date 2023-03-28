#include <iostream>

int main(){


    const char *l = "Hello";

    std :: string k = "hello";


    std :: cout << l ;

    for (int i = 0; l[i]; i++)
    {
        k[i] = l[i];
        
    };

    std :: cout << " This is string" << k;

    std :: cout << k.length();
    

 

    

    return 0;


}