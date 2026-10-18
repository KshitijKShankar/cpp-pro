#include<iostream>
using namespace std;

int getDigit(const int number);
int sumOddDigits(const string cardnumber);    
int sumEvenDigits(const string cardnumber);    




int main()
{
// Luhn Algo
// step 1 : double every second digit from right to left
//          if doubled number is 2 digits, split them
// step 2 : Add all single digits from step 1
// step 3 : Add all odd numbered digits from right to left
// step 4 : Sum results from steps 2 & 3
// step 5 : If step 4 is divisible by 10, # is valid

string cardNumber;
int result = 0;

cout << "Enter your CC number #: ";
cin >> cardNumber;

result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);

if(result % 10 == 0){
    cout << cardNumber << " CC is Valid \n";
}
else{
    cout << cardNumber << " is invalid \n";
}
 

    return 0;
}
int getDigit(const int number){

    return number % 10 + (number / 10 % 10);

}
int sumOddDigits(const string cardNumber){
    int sum = 0;
    for (int i = cardNumber.size() - 1; i >=0; i-=2){
        sum += cardNumber[i] - '0';
    }
    return sum;


}
int sumEvenDigits(const string cardNumber){
    int sum = 0;
    for (int i = cardNumber.size() - 2; i >=0; i-=2){
        sum += getDigit((cardNumber[i] - '0') * 2);
    }
    return sum;
}  