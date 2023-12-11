#include<iostream>
using namespace std;
int main()
{
	cout<<"Muhammad Muneeb 22108190";
	int fahrenheit,celsius;
	cout<<"\nEnter the Temperature in fahrenheit ";
	cin>>fahrenheit;
	
	celsius = ((fahrenheit*50)-(50*32))/9;
	
	cout<<fahrenheit<<" degree fahrenheit is "<<celsius<<"degree celsius "<<endl;
	return 0;
}

