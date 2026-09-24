#include<iostream>
#include<ctime>
using namespace std;
int main()
{

srand(time(0));
int randNum = rand() % 5 + 1;

switch(randNum){
    case 1: cout << "You win a car!\n";
            break;
    case 2: cout << "You win nothing!\n";
            break;
    case 3: cout << "You win a truck!\n";
            break;
    case 4: cout << "You win a cycle!\n";
            break;
    case 5: cout << "You win a bike!\n";
            break;
}






    return 0;
}