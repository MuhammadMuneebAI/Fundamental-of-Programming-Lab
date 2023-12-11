#include<iostream>
#include<string>
using namespace std;
int main()
{
	string a ;
	bool connection = true;
	while(connection)
	{
		cout<<"Enter your name : ";
		cin>>a;
		if(a == "end")
		{
			cout<<"i am done";
			connection = false ;
			exit;
		}
		else
		{
			cout << a <<endl;
		}
	}
return 0;
}
