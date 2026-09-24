#include<iostream>
using namespace std;
int main()
{
  double p;
  double h;
  double b;

  cout << "Enter the value of perpendicular length of triangle : ";
  cin >> p;

  cout << "Enter the value of base length of triangle : ";
  cin >> b;

  p = pow(p , 2);
  b = pow(b , 2);
  h = sqrt(p + b);

  cout << "The hypoteneuse of a right triangle with given p and b is : " << h << '\n';
  
    return 0;
}