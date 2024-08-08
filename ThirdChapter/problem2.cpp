#include <iostream>
using namespace std;
int main()
{
	const double km_in_miles = 1.609;
 	double miles = 0, km = 0;
 	cout << "Enter the count of miles:";
 	cin >> miles;
 	km = miles * km_in_miles;
 	cout << "Count of km in miles: " << km;
}
