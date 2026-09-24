#include<iostream>
using namespace std;
int main()
{
int rows;
int colm;
char symbols;

cout << "How many rows: ";
cin >> rows;

cout << "How many colums: ";
cin >> colm;

cout << "Enter desired symbol: ";
cin >> symbols;


for (int i = 1; i<=rows; i++){
    for(int j = 1; j <=colm; j++){
        cout  << symbols ;
    }
    cout << '\n';
}




    return 0;
}