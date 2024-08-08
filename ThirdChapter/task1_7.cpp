// считать и записать имя
#include "../std_lib_facilities.h"
int main()
{
	char friend_sex = 'm';
	int age = 0;
	string addr_name, friend_name, add_string, cond_string; 
 	cout << "Type addressee's name:\n"; //addressee's name
 	cin >> addr_name; 
 	cout << "Enter the name of another friend:\n"; //name of another friend
 	cin >> friend_name;
 	cout << "Enter the friend's sex - m or f:\n"; //friend's sex
 	cin >> friend_sex;
 	if (friend_sex=='m') add_string = "him"; //cond for friend's sex
 	else add_string = "her";
 	cout << "Enter the age of addressee:\n";
 	cin >> age;
 	if (age<0 || age>110) simple_error("you are joking"); //conds for addresse's age
 	if(age<12) cond_string = "Next year you will turn " + to_string(age + 1) + " years old.";
	else if(age==18) cond_string = "Next year you will be able to vote.";
	else if(age>60) cond_string = "I hope you don't get bored in retirement";
	string your_name;
	cout << "Enter your name:\n";
	cin >> your_name;
 	cout << "Your mail:\n" << //mail
 	"-------------------\n"<<
	 "Dear " << addr_name << ',';
 	cout << "\nHow are you? I'm all good. I miss you.\n"<<
		"I was at the Central State Museum yesterday,\n"<<
		"it's so cool there! I especially liked the paintings from the National Gallery.\n"<<
		"I will come soon with souvenirs!\n";
	cout << "Have you seen " << friend_name << " recently?\n";
	cout << "If you see " << friend_name << " , please ask " << add_string << " to call me.\n";
	cout << "I heard you just celebrated your birthday and you turned " << age << endl;
	cout << cond_string;
	cout << "Sincerely, " + your_name;
}