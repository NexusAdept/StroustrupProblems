// считать и записать имя
#include "../std_lib_facilities.h"
int main()
{
	string first_name; 
 	cout << "Type addressee's name:\n";
 	cin >> first_name; 
 	cout << "Your mail:\n" <<"Dear " << first_name << ',';
 	wchar_t ch = {L'п'};
 	wcout<< ch;
}