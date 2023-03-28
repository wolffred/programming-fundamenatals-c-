// #include <iostream>
// #include <cstring>

// int main(){

//     std :: string s;

//     std :: cout << "Enter word: " << std :: endl;
//     std :: cin >> s;

//     const int length = s.length();

//     char* char_array = new char[length + 1];

//     strcpy(char_array, s.c_str());

//     const char* newarray = char_array;

    // for (int i = 0; i < length; i++)
    // {
    //     std::cout << newarray[i] << std :: endl;
    // }

//     //std :: cout << length;


//     return 0;


// }

#include <iostream>
#include <cstring>

int main(){

    std:: string s;

    std :: cout << "Enter Word: ";
    std :: cin >> s;

    const char* chararray = s.c_str();

    std :: cout << chararray << std :: endl;

    for (int i = 0; chararray[i]; i++)
    {
        std::cout << chararray[i] << std :: endl;
    }


    return 0;

}