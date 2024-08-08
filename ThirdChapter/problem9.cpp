#include <iostream>
using namespace std;
int main()
{
 	string istr;
 	cin>>istr;
 	if (istr=="zero") cout<<0; 
 	else if(istr=="one") cout<<1;
 	else if(istr=="two") cout<<2;
	else if(istr=="three") cout<<3;
	else if(istr=="four") cout<<4; 	
	else cout<<"I doesn't know this number";
}
