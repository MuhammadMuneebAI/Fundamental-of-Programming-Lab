// table of 2 or print the shape

#include<iostream>
using namespace std;

int main()
{
	int rows;
	cout<<"Muhammad Muneeb 22108190"<<endl;
	cout<<"Enter the number of rows";
	cin>>rows;
	
	for(int i=1; i <= rows; ++i)
	{
		for(int j=1; j<=i; ++j)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
return 0;
}
