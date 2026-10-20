#include<iostream>
using namespace std;

struct student{
string name;
double gpa;
bool enrolled;
};
int main()
{
// struct = A structure that group related variables under one name
//          structs can contain many different data types (string, int, double, bool)
//          variables in a struct are known as "members"
//          memebers can be access with. "Class member access operation"

student student1;
student1.name = "kshitij";
student1.gpa = 8.9;
student1.enrolled = true;

cout << student1.name << '\n';
cout << student1.gpa << '\n';
cout << student1.enrolled << '\n';



    return 0;
}