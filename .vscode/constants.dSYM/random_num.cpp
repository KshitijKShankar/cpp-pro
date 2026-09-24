#include<iostream>
#include<ctime>
using namespace std;
int main()
{

    // pseduo random = NOT truly random

    srand(time(NULL));

    int num = (rand() % 10) + 1;

    cout << num << '\n';



    return 0;
}