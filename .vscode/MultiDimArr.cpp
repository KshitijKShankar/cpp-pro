#include<iostream>
using namespace std;
int main()
{
// multidim array (2d array) = array containing of more arrays.


    string cars[3][3] = {{"Mustang", "F-150", "Escape"},
                        {"Corvette", "Equnox", "Silverado"},
                        {"Challenger", "Durango", "rRam 1500"}};

  
          
            cout << cars[0][0] << " ";              
            cout << cars[0][1] << " ";
            cout << cars[0][2] << "\n";
             cout << cars[1][0] << " ";              
            cout << cars[1][1] << " ";
            cout << cars[1][2] << "\n";
             cout << cars[2][0] << " ";              
            cout << cars[2][1] << " ";
            cout << cars[2][2] << "\n";
    return 0;
}