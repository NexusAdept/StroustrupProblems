#include <iostream>
using namespace std;
int main()
{
 	string first, second, third;
 	cout << "Enter 3 strings:\n";
 	cin>>first>>second>>third;
 	cout<<"In descending order: ";
	if (first>=second) 
	{
		if (third>=first) cout<<third<<" "<<first<<" "<<second;
		else if(second>=third) cout<<first<<" "<<second<<" "<<third;
		else cout<<first<<" "<<third<<" "<<second;
	}
	else 
	{
		if (third>=second) cout<<third<<" "<<second<<" "<<first;
		else if(first>=third) cout<<second<<" "<<first<<" "<<third;
		else cout<<second<<" "<<third<<" "<<first;
	}
	cout<<"\nIn ascending order: ";
	if (first>=second) 
	{
		if (third>=first) cout<<second<<" "<<first<<" "<<third;
		else if(second>=third) cout<<third<<" "<<second<<" "<<first;
		else cout<<second<<" "<<third<<" "<<first;
	}
	else 
	{
		if (third>=second) cout<<first<<" "<<second<<" "<<third;
		else if(first>=third) cout<<third<<" "<<first<<" "<<second;
		else cout<<first<<" "<<third<<" "<<second;
	}
}