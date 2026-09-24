#include<iostream>
using namespace std;
int main()
{
// && = check if two conditions are true
// || = check if atleast one of two conditions is true
// ! = reverse the logical state of its operand

int temp;

cout << "Enter the temperature";
cin >> temp;

if(temp <= 0  || temp >=30){
    cout << "The temp is bad!";
}
else {
    cout << "The temp is good!";
}
    return 0;
}