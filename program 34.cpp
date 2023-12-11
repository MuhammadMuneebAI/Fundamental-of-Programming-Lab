// program to print a text

#include <iostream>
using namespace std;

// display a number
void displaynum(int n1, float n2)
{
	cout<<"The int number is "<<n1;
	cout<<"\nThe double number is "<<n2;
}

int main()
{
	int num1 = 5;
	int num2 = 5.5;
	
	//calling the function
	displaynum(num1, num2);
return 0;
}
