#include<iostream>
using namespace std;
int main()
{

// if statement = displays if a set condition is true.
//                if not, then don't do it.

int age;
cout << "Welcome to X\n";
cout << "Enter your age to access X services: ";
cin >> age;
 if(age >= 18){
 cout << "Welcome to X services\n";
 }
 else{
cout << "Please return to the main menu\n";
 }

    return 0;
}