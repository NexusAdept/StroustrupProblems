#include <iostream>
using namespace std;
int main()
{
 	int val1=0, val2=0, val3=0;
 	cout << "Enter 3 numbers:\n";
 	cin>>val1>>val2>>val3;
 	cout<<"In descending order: ";
	if (val1>=val2) 
	{
		if (val3>=val1) cout<<val3<<" "<<val1<<" "<<val2;
		else if(val2>=val3) cout<<val1<<" "<<val2<<" "<<val3;
		else cout<<val1<<" "<<val3<<" "<<val2;
	}
	else 
	{
		if (val3>=val2) cout<<val3<<" "<<val2<<" "<<val1;
		else if(val1>=val3) cout<<val2<<" "<<val1<<" "<<val3;
		else cout<<val2<<" "<<val3<<" "<<val1;
	}
	cout<<"\nIn ascending order: ";
	if (val1>=val2) 
	{
		if (val3>=val1) cout<<val2<<" "<<val1<<" "<<val3;
		else if(val2>=val3) cout<<val3<<" "<<val2<<" "<<val1;
		else cout<<val2<<" "<<val3<<" "<<val1;
	}
	else 
	{
		if (val3>=val2) cout<<val1<<" "<<val2<<" "<<val3;
		else if(val1>=val3) cout<<val3<<" "<<val1<<" "<<val2;
		else cout<<val1<<" "<<val3<<" "<<val2;
	}
}