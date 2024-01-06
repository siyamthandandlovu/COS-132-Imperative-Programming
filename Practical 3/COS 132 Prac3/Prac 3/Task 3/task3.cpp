#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main() 
{ int inum;//define student var
	cout <<"Please enter your student number: \n";
	cin >> inum;
    srand(14);


	if (inum % 2 == 0 )
	cout << rand() %100 << "is ready to take on COS 132!";
	 else
	cout << inum << "is really excited for COS 132!";
	return 0;
}
