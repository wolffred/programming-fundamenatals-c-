#include <iostream>

using namespace std;


int i = 0;
int count = 0;

const int maxlength = 5;

char input_line[] = {'.', ',', '?', ';', '?'};

int main(){

while(i < maxlength){
    if( input_line[i] == '?' ){
         ++count;
         }
    i++;

}

cout << count;

}