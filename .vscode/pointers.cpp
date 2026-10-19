#include<iostream>
using namespace std;
int main()
{
// pointers = variable that stores a memory address of another variable
//             & address-of operator
//             * derefrence operator

string name = "Kshitij";
int age = 20;
string *pName = &name;
int *pAge = &age;
cout << *pAge << '\n';
cout << *pName << '\n';




    return 0;
}