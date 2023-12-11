#include<iostream>
#include<string>
using namespace std;
int main()
{
	int p,sum =0 ;
	bool connection = true;
	while(connection)
	{
		cout<<"Enter the Positive Value : ";
		cin>>p;
		if(p < 0)
		{
			connection = false ;
			cout<<sum;
		}
		else
		{
			sum = sum + p ;
		}
	}
return 0;
}
