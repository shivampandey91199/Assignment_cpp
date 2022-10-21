#include <iostream>
using namespace std;
  
// Finds if a and b are same.
void areSame(int a, int b)
{
   if (a^b)
       cout << "Not Same";
   else
       cout << "Same";
}
  
int main()
{ 
   areSame(10, 20);
}