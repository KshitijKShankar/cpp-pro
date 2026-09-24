#include<iostream>
using namespace std;
int main()
{

// cout << (insertion operator)
// cin >> (extreaction operator)

string name;
int age;

cout << "What's your full name?: ";
getline(cin, name); // to read full string with spaces

cout << "Whats your age?: ";
cin >> age;



cout << "Hello " << name << '\n';
cout << "You are " << age << " years old\n";






    return 0;
}