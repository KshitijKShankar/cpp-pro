#include<iostream>
using namespace std;
int main()
{
 //fill() - Fills a range of elements with a specified value
//          fill(begin, end, value)

const int size = 99;
string foods[size];
fill(foods, foods + (size/3), "pizza"); 
fill(foods + (size/3), foods + (size/3)*2, "burger");
fill(foods+ (size/3)*2, foods + size, "fries");
for(string food : foods){
    cout << food << '\n';

}



    return 0;
}