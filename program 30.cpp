#include<iostream>
using namespace std;
int main()
{
	int i;
	int n;
    int check=0;
    cout<<"Muhammad Muneeb 22108190"<<endl;
	cout<<"input a Number: ";
	cin>>n;
	for(int i=1; i<=n;i++)
	{
	if (n%i==0)
	{
	check++ ;
	}
    }
if(check==2)
{
	cout<<"Prime Number "<<endl;
}
else
{
   cout<<"Composite"<<endl;
}
return 0;
}
