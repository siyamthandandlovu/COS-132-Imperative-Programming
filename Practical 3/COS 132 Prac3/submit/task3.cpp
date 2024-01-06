#include <iostream>
#include <cstdlib>
// #include <cmath>
using namespace std;

int main() 
{ int inum, irand;//define student var
	cout <<"Enter your student number: ";
	cin >> inum;
    srand(14);

	if (inum % 2 == 0 )
	cout << ((rand() % (90)) + 10) << " is ready to take on COS 132!" << endl;
	 else
	cout << inum << " is really excited for COS 132!" << endl;

	cout <<"Enter your student number: ";
	cin >> inum;
   // srand(14);

	if (inum % 2 == 0 )
	cout << ((rand() % (90)) + 10) << " is ready to take on COS 132!" << endl;
	 else
	cout << inum << " is really excited for COS 132!" << endl;


	return 0;
}
