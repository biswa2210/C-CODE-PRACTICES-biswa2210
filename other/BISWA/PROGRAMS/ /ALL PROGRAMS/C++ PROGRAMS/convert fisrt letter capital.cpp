//wap to convert first letter capital
#include<iostream>
#include<string.h>
#include<ctype.h>
using namespace std;

int main()
{
	int i;
	char x[100000];
	cout<< "ENTER YOUR NAME (ONLY FIRST NAME)=";
	cin>>x;
	x[0]=toupper(x[0]);
	cout<<"NOW YOUR NAME IS="<<x;
	return 0;
}
