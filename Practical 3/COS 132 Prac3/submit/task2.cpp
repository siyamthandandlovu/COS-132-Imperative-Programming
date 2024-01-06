#include<iostream>
#include<iomanip>
#include<string>

using namespace std;
int main() 
{
	string name;
	cout.fill('*');

	cout << "Enter your name: ";
	getline(cin, name); //we now have the name of the user
//	if ( ilen > -1 ) //this means that we have to FILL IT IN
	cout << "Howdy: " << setw(7) << name << endl;
		
		cout << "Enter your name: ";
	getline(cin, name); //we now have the name of the user
//	if ( ilen > -1 ) //this means that we have to FILL IT IN
	cout << "Howdy: " << setw(7) << name << endl;

	cout << "Enter your name: ";
	getline(cin, name); //we now have the name of the user
//	if ( ilen > -1 ) //this means that we have to FILL IT IN
	cout << "Howdy: " << setw(7) << name << endl;

	return 0;
}
