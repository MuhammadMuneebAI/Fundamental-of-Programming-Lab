#include <iostream>
using namespace std;
int cuberoot(int p)
{
  return(p*p*p);
}
int main()
{
	int a;
	int result;
	cout<<"Enter the Number :";
	cin>>a;
	result=cuberoot(a);
	cout<<result;
	return 0;
}
