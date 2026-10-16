#include<iostream>
using namespace std;
int main()
{
 //fill() - Fills a range of elements with a specified value
//          fill(begin, end, value)

const int size = 100;
string foods[size];
fill(foods, foods + (size/2), "pizza"); 
fill(foods + (size/2), foods + size, "burger");

for(string food : foods){
    cout << food << '\n';

}



    return 0;
}