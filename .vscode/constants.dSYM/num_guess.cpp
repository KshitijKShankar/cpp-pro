#include<iostream>
using namespace std;
int main()
{
int num;
int guess;
int tries;

srand(time(NULL));
num = (rand() % 100) + 1 ;

cout << "Number guessing game:\n";
do {
cout << "Enter a guess b/w (1-100): ";
cin >> guess;
tries++;

if(guess > num){
    cout << "Go Lower!\n";
}
else if (guess < num){
    cout << "Go Higher!\n";
}
else{
    cout << "CORRECT ANS! # of tries:  " << tries << '\n';
}
}while(guess != num);

    return 0;
}