#include<iostream>
using namespace std;
void walking(int steps);
int main()
{
// recursion = a programming technique where a function
//             invokes itslef from within
//             break a complex concept into a repeatable single step

walking(100);

    return 0;
}
void walking(int steps){
    if(steps > 0){
        cout << "You took a step!\n";
        walking(steps - 1);
    }
}