#include <iostream>
using namespace std;
int main()
{
 	string op="";
 	double rval=0, lval=0;
 	cin>>op>>lval>>rval;
 	if (op=="+" or op=="plus") cout<<"result is "<<lval+rval;
 	else if (op=="-" or op=="minus") cout<<"result is "<<lval-rval;
 	else if (op=="*" or op=="mul") cout<<"result is "<<lval*rval;
 	else if (op=="/" or op=="div") cout<<"result is "<<lval/rval;
 	else cout<<"some error!";
}
