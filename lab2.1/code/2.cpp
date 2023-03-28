// #include <iostream>

// using namespace std;

// int main(){

//     int number;
//     int *pNumber = &number;
//     int &Rnumber = number;
//     const int k = 10;




//     number = 5;
//     cout << number << endl;
//     ++*pNumber;
//      cout << number << endl;
//     ++Rnumber;
//     cout << number<< endl;
//     cout << pNumber << endl;


//     int a = 0xf3f2;
//     int b = 0437;
//     int c = 'a';

//     cout << a <<endl;

//     cout << b << endl;

//     cout << c << endl; 


//     return 0;

// }

# include <iostream>

int main(){

    int number;

    int *pNumber = &number;

    int &inumber = number;

    const int k = 8;

    std :: cout << "constant = " << k << std :: endl;

    number = 5;

    ++*pNumber;

    ++inumber;

    std :: cout << number << std :: endl;



    int a = 0xf3f2;
    int b = 0437;
    int c = 'a';

    std :: cout << a << std :: endl;
    std :: cout << b << std :: endl;
    std :: cout << c << std :: endl; 


    return 0;
}