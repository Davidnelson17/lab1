/*
 * lab1test.cpp
 *
 *  Created on: Sep 14, 2014
 *      Author: David Nelson
 */
#include <iostream>
#include <string>
using namespace std;

int main()
{
//Initializes variables
int hours = -1, maxhours = 744, minhours = 0;
float price, plana = 9.95, planb = 14.95, planc = 19.95,
	  ratea = 2.00, rateb = 1, limita = 10, limitb = 20;
string name = "Empty";
char type;
cout << "This program will calculate your monthly bill." << endl << endl;
// Asks the user for input
cout << "Please input your name." << endl << "Name: ";
cin >> name;
do
{
cout << endl << endl << "Please input the package type. (A, B, or C)" << endl << "Type: ";
cin >> type;
type = toupper(type);
if (type != 'A' && type != 'B' && type != 'C')
cout << endl << "Error: '" << type << "' is not a valid input." << endl;
}while( type != 'A' && type != 'B' && type != 'C');
do
{
cout << endl << endl << "Please enter the amount of hours used" << endl
     << "Hours: ";
cin >> hours;
if (hours < minhours || hours > maxhours)
cout << endl << "Error: '" << hours << "' is not a valid input" << endl;
}while( hours < minhours || hours > maxhours);
//Determines the plan and price of service.
if  (type == 'A')
{
if (hours > limita)
price = plana + ((hours - limita) * ratea);
else
price = plana;
}
else if (type == 'B')
{
if (hours > limitb)
price = planb + ((hours - limitb) * rateb);
else
price = planb;
}
else if (type == 'C')
{
price = planc;
}
cout << endl << "Name: " << name << " Package Type: " << type << " Hours used: "
	 << hours << " Amount Due: $" << price << ".";
return 0;
}




