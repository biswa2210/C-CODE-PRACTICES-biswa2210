#include<iostream>
#include<windows.h>

using namespace std;

int main()
{

	cout << endl << "Hit ENTER to continue...";

	cin.clear();

	cin.sync();

	cin.get();
	
	system("cls");
	Beep(2221,2000);
	system("mode 1000");
	system("color a");
	system("title BISWA");
	cout<<"MY name is BISWA & I AM A C PROGRAMER";
	
	

	 
}

