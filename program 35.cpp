#include <iostream>
using namespace std;

// declaring a function
int add(int a , int b){
	return (a+b);
}

int main()
{
	int sum;
	
	//calling the function and starting
	//the function value is sum
	sum= add(100, 78);
	
	cout<<"100 + 78 ="<<sum<<endl;
	
	return 0;
}
