#include <iostream>
using namespace std;
int main()
{
 	double val1=0, val2=0;
 	cout << "Enter 2 numbers:\n";
 	cin>>val1>>val2;
 	cout<<"Max number: ";
	if (val1>=val2) cout<<val1;
	else cout<<val2;
	cout << "\nMin number: ";
	if (val1<=val2) cout<<val1;
	else cout<<val2;
	cout<<"\nval1+val2: "<<val1+val2;
	cout<<"\nval1-val2: "<<val1-val2;
	cout<<"\nval1*val2: "<<val1*val2;
	cout<<"\nval1/val2: "<<val1/val2;
}