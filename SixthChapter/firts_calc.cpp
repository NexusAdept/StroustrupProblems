#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int res = 0;
	cin>>res;
	if(!cin)
	{
		cout<<"not a number!";
		return 1;
	}
	int number = 0;
	char oper=' ';
	while(cin>>oper)
	{
		if(!cin)
		{
			cout<<"not a symbol!";
			return 2;
		}
		else if(oper=='|') break;
		cin>>number;
		if(!cin)
		{
			cout<<"not a number!";
			return 1;
		}
		switch(oper)
		{
			case '+':
				res+=number;
				break;
			case '-':
				res-=number;
				break;
			case '*':
				res*=number;
				break;
			case '/':
				res/=number;
				break;
		}
	}
	cout<<res;
}