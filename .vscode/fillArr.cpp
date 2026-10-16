#include<iostream>
using namespace std;
int main()
{
 string foods[5];
int size = sizeof(foods)/sizeof(foods[0]);
string temp;
for(int i = 0; i < size; i++){
    cout << "Enter a food you like or 'q' to quit #" << i << ": ";
    getline(cin, temp);
    if(temp == "q"){
        break;
    }
    else {
        foods[i] = temp;
    }
}


cout << "You like the following food;\n";

for(string food : foods){
    cout << food << '\n';
     
}
    return 0;
} 