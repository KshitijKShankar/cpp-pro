#include<iostream>
using namespace std;
int main()
{

   // memeory address = a location in memory where data is stored
   // a memeory address can accessed with & (address-of opearator)

   string name = "Bro";
   int age = 20;
   bool student = true;

   cout << &name << '\n';
   cout << &age << '\n';
   cout << &student << '\n';



    return 0;
}