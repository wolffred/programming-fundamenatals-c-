#include <iostream>
#include <string>

using namespace std;

int main(){

    char ch;
    int position=0;
    char sentence[100];

    cout<<"Enter a sentence: "<<endl;

    //cout<<sentence[0];

    while(cin.get(ch)){
        sentence[position] = ch;
        position++;
    }

    for(int i=position-1;i>=0;i--)
        cout<<sentence[i];
    


    
    return 0;
}