#include <iostream>
using namespace std;

int main()
{ int total, x, i;

cout << "Enter an int: ";
cin >> x;
total =0;
i = 1;
 

while (i <= x)
{
   if ( !(i % 2 == 0) )
   {
     ++total;    
   }
   ++i; 
}

cout << "Number of Odds: " << total;

    return 0;
}