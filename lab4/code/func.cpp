#include <iostream>

namespace my
{

    int strcmp(const char *l, const char *r)
    {

        int i;
        for (i = 0; l[i]; i++);
        

        int j;
        for (j = 0; r[j]; j++);
        

        if (i == j)
        {
            int result = 0;
            return result;
        }
        else if (i < j)
        {
            int result = -1;
            return result;
        }
        else if (i > j)
        {
            int result = 1;
            return result;
        }

        std ::cout << std ::endl;
    };

    int strlen(const char *s){

    int i;
    for( i = 0; s[i]; i++){
    }

    std :: cout << std :: endl;

    return i;

    };

    char *strcat(char *l, const char *r){

    int k;
    for( k = 0; l[k]; k++){
    }

    int i;
    for( i = 0; r[i]; i++){
    for (int j = k; j < 100; j++)
    {
        l[j] = r[i];
    }
    };

    std :: cout <<  l;

    }

};

int main()
{

    std ::cout << my::strcmp("oranges", "apples");

    std :: cout << my::strlen("hekjdfjfdjkllo");

    std :: cout << my::strcat("oranges", "apples");

    return 0;
}