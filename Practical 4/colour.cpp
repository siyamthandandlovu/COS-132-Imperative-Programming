#include <iostream>
#include <string>

using namespace std;

int main ()
{
//define your string variables
 string colour;
 int primary, num, i=1;

 while (i<=3)
{ //FOR LOOOOOOOOOOOOOP
 cout << "Input a colour: ";
 cin >> colour;

//green, yellow and orange. blue, purple and red.
    if (colour == "yellow" ||   colour == "blue" ||  colour == "red")
    {
    primary = 5;//5 means the colour is primary 
    cout << "Input a number: ";
    cin >> num;
    }
    
    else if (colour == "green" || colour == "orange" || colour == "purple")
    {
    primary = 10; // 10 means your colour is a secondary colour
    cout << "Input a number: ";
    cin >> num;
    }

    else
    primary = 0;


//unsing multiple cases
 if (primary == 0)
 {
    cout << "Colour not found" << endl;     
 }
    else if (primary == 5)//meaning it is a PRIMARY COLOUR
 {
     switch (num)//cases of number num
     {
     case 1: cout << "yellow,orange,red,purple,blue,green"<<endl;
     case 2: cout << colour << endl;
     case 3: if (colour == "yellow") cout << "red" << endl;
             else if (colour == "blue") cout << "yellow" << endl;
             else if (colour == "red") cout << "blue" << endl;
     }
 }
    else if (primary == 10) //meaning it is a SECONDARY COLOUR
 {
     switch (num)//cases of number num
     {
     case 1: cout << "green,orange,purple" << endl;
             break;
     case 2: cout << colour << "!" << endl;
             break;
     case 3: if (colour == "green") cout << "orange";
             else if (colour == "orange") cout << "purple";
             else if (colour == "purple") cout << "green";
             break;
     }
 }

i++;
} //FOR LOOOOOOOOOOOOOP

    return 0;
}