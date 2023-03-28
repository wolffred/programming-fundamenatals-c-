#include <iostream>

using namespace std;

int number(){

int num;

cout << "Enter a number: " ;
cin >> num;

return num;
}

int main(){

int prime;

prime = number();

if(prime%2 ==0){

for(int i =1; i <= 20; i++){

cout << i << " * " << prime << " = " << i*prime << endl;

}

}else{



int counter = 1;
int num = 0;

while( counter <= 30) {
if(num%prime != 0){
cout << "(" << counter << ") " << num << endl;
counter++;
}
num++;
}


}


}