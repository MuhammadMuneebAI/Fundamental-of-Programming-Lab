#include<iostream>
using namespace std;
int main()
{
	int num1 ;
	int num2 ;
	int num3 ;	
	cout<<"Muhammad Muneeb 22108190"<<endl;
	cout<<"Please Enter Number 1 : ";
	cin>>num1;
	cout<<"Please Enter Number 2 : ";
	cin>>num2;
	cout<<"Please Enter Number 3 : ";
	cin>>num3;
	if((num1>num2) && (num1>num3))
	{
	cout<<"Number 1 is greatest"<<endl;
	}
	else if((num2>num1) && (num2>num2))
	{
	cout<<"Number 2 is greatest"<<endl;
	}
	else if((num3>num1) && (num3>num2))
	{
	cout<<"Number 3 is greatest"<<endl;
	}
return 0;
}
