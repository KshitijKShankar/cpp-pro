#include<iostream>
using namespace std;
int main()
{
// sizeof() = determines the size in bytes of a:
//            variable, data type, class, objects, etc.



string name = "bro";
double gpa = 2.5;
char grade = 'F';
char grades[] = {'A', 'B', 'C', 'D', 'F'};
cout << sizeof(grades) << " bytes\n";


    return 0;
}