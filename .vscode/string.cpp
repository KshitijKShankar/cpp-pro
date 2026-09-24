#include<iostream>
using namespace std;
int main()
{
string name;

cout << "Emter your name: ";
getline(cin, name);

name.append("@gmail.com");

cout << "Your gmail id is " << name;


    return 0;
}
