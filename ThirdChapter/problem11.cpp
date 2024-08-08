#include <iostream>
using namespace std;
int main()
{
	int coin1 = 0, coin5 = 0, coin10 = 0; //variables for value of different coins types and for result
	int coin25 = 0, coin50 = 0, coin100 = 0, result = 0; 
	string s1 = "s", s2= "s", s3 = "s"; //'s' for output of coins value
	string s4 = "s", s5 = "s", s6 = "s";
 	cout<<"How many one-cent coins do you have?"<<endl;
 	cin>>coin1; if(coin1==1) s1="";
	cout<<"How many nickels do you have?"<<endl;
	cin>>coin5; if(coin5==1) s2="";
	cout<<"How many dimes do you have?"<<endl;
	cin>>coin10; if(coin10==1) s3="";
	cout<<"How many 25-cent coins do you have?"<<endl;
	cin>>coin25; if(coin25==1) s4="";
	cout<<"How many 50-cent coins do you have?"<<endl;
	cin>>coin50; if(coin50==1) s5="";
	cout<<"How many dollar coins do you have?"<<endl;
 	cin>>coin100; if(coin100==1) s6="";
 	result = coin1+5*coin5+10*coin10+25*coin25+50*coin50+coin100*100;
 	//output of coins value
 	cout<<"You have " << coin1 << " one-cent coin" <<s1;
 	cout<<"\nYou have " << coin5 << " nickel" << s2;
 	cout<<"\nYou have " << coin10 << " dime" << s3;
 	cout<<"\nYou have " << coin25 << " 25-cent coin" << s4;
 	cout<<"\nYou have " << coin50 << " 50-cent coin" << s5;
 	cout<<"\nYou have " << coin100 << " dollar coin" << s6;
 	//output of result
 	cout<<"\nThe total value of your coins in dollars is " << result/100;
	if (result%100<10 && result%100>0) cout << ",0" << result%100; 
	//we are changing output of result for special cases of result value 
	else if (result%100>0 and (result%100)%10==0) cout << "," << (result%100)/10;
	else if (result%100>0) cout << "," << result%100;
	cout << " dollars.";
 	cout<<"\nThe total value of your coins in cents is " << result << " cents.";
}
