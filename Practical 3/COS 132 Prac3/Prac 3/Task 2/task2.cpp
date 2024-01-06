#include<iostream>
#include<iomanip>
#include<string>
#include<cmath>

using namespace std;
int main() {
	string name;
	int ilen;

	cout << "Enter your name: \n";
	getline(cin, name);//we now have the name of the user

  ilen = 7 - name.length();//eg is it has more than enought letters, its neg, less than, its pos
  cout.fill('*');

	if ( ilen > -1 ) //this means that we have to FILL IT IN
	cout << "Howdy: " << setw(7) << name;
		/* cout << setfill('*') << setw(7) << name << "the length is less than 7"; */
 // cout << "Howdy: " << setw(7) << name << "the length is less than 7";

	return 0;
}
