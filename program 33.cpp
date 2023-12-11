#include <iostream>
using namespace std ;

int factorial (int number)
{
	int result = 1 ;
	for(int i = 1 ; i <= number ; i++)
	{
		result = result * i ;
	}
	return (result) ;
}
int main ()
{
	int number ;
	int result = 0 ;
	cout<< "Enter the number ";
	cin>>number ;
	result = factorial (number);
	cout<<result ;
	return 0;
}
