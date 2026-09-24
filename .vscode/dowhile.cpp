#include<iostream>
using namespace std;
int main()
{     
   // do while loop = do some block of code first,
   //     Then request again if condition is true 

   int number;
   
   do{
    cout << "Enter a positive #: ";
    cin >> number;
   }while(number < 0);
    
    
    cout << "Your number is: " << number << '\n';
    
    
    
    
    return 0;
}
