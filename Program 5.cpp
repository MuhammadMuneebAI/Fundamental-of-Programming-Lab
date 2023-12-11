#include<iostream>
using namespace std;
int main ()
{
	cout<<"Swap two numbers";
	cout<<"\nMuhammad muneeb 22108190";
	int num1,num2,tamp;
	cout<<"\nEnter first number ";
	cin>>num1;
	cout<<"Enter second number ";
	cin>>num2;
	tamp=num2;
	num2=num1;
	num1=tamp;
	cout<<"\nAfter Swaping num1 "<<num1;
    cout<<"\nAfter Swaping num2 "<<num2;
    return 0;
}
