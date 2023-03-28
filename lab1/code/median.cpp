#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
int num1, num2, num3, num4, num5;

cout << "enter first number: " << endl;
cin >> num1;

cout << "enter second number: " << endl;
cin >> num2;

cout << "enter third number: " << endl;
cin >> num3;

cout << "enter fourth number: " << endl;
cin >> num4;

cout << "enter fifth number : " << endl;

cin >> num5;
 

int arr[5];

arr[0] = num1;
arr[1] = num2;
arr[2] = num3;
arr[3] = num4;
arr[4] = num5;

int l = sizeof(arr)/sizeof(arr[0]);

sort(arr, arr + l);

if(l % 2 == 0){

cout <<  (arr[l/2 -1] + arr[l/2])/2 << endl;

}
else{

cout << arr[l/2] << endl;
}


return 0;


}