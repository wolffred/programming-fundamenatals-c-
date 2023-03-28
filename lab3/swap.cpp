
// #include <iostream>

// int swap(int *a ,int *b){

//     std :: cout << "a = " << *a << std :: endl;
//     std :: cout << "b = " << *b << std :: endl;

//     int temp = *a;
//     *a = *b;
//     *b = temp;

//     std :: cout << "temp = " << temp << std :: endl;
//     std :: cout << "a = " << a << std :: endl;
//     std :: cout << "b = " << b << std :: endl;

// }

// int main(){

//     int x = 5, y =6;

//     swap(&x, &y);
// }




#include <iostream>

void swap(int *a ,int *b){

    int temp = *a;
    *a = *b;
    *b = temp;

}

int main(){

    int x = 5, y =6;

    swap(&x, &y);

    std :: cout << "a = " << x << std :: endl;
    std :: cout << "b = " << y << std :: endl;
}