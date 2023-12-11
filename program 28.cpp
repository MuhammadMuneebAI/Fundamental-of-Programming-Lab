#include<iostream>
using namespace std;
int main()
{
	int num;
	bool isprime = true;
	cout<<"Muhammad Muneeb 22108190"<<endl;
	cout<<"Enter a Number: ";
	cin>>num;
	for(int i=2; i<=num/2;++i)
	{
	if (num%i==0)
	{
	isprime=false;
	break;
	}
}
if(isprime)
{
	cout<<"Is a Prime Number "<<num<<endl;
}
else
{
   cout<<"Invalid Number"<<endl;
}
return 0;
}
