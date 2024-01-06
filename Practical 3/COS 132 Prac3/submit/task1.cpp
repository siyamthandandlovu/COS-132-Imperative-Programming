#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;
int main() 
{
	double f, x; //= 2.53;

	cout << "Enter a value of x: ";
	cin >> x;

	f= (cos(pow(x,2.0))) / (5+2*cos(x))  +  
	(sin(pow(x,2.0))) / (5*M_PI)  +  
	tan(x) / (cos(x)+sin(x));

	cout <<"The answer is: " << setprecision(5) << fixed << f << endl;

	return 0;
}
