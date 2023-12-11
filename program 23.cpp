#include<iostream>
using namespace std;
void calculator()
{
	float a,b,result;
	int choice;
	cout<<"Muhammad Muneeb 22108190"<<endl;
	cout<<"Press 1 For Addition "<<endl;
	cout<<"Press 2 For Subtraction "<<endl;
	cout<<"Press 3 For Multiplication "<<endl;
	cout<<"Press 4 For Division "<<endl;
	cout<<"Press 5 For Modulus "<<endl;
	cin>>choice;
	if(choice==1)
	{
		cout<<"Enter Value of First Number : "<<endl;
		cin>>a;
		cout<<"Enter Value of Second Number : "<<endl;
		cin>>b;
		result=a+b;
		cout<<"The addition is : "<<result<<endl;		
	}
	else if(choice==2)
	{
	    cout<<"Enter Value of First Number : "<<endl;
		cin>>a;
		cout<<"Enter Value of Second Number : "<<endl;
		cin>>b;
		result=a-b;
		cout<<"The Subtraction is : "<<result<<endl;
	}
	else if(choice==3)
	{
		cout<<"Enter Value of First Number : "<<endl;
		cin>>a;
		cout<<"Enter Value of Second Number : "<<endl;
		cin>>b;
		result=a*b;
		cout<<"The Multiplication is : "<<result<<endl;
	}
	else if(choice==4)
	{
	    cout<<"Enter Value of First Number : "<<endl;
		cin>>a;
		cout<<"Enter Value of Second Number : "<<endl;
		cin>>b;
		result=a/b;
		cout<<"The division is : "<<result<<endl;
	}
	else
	{
		cout<<"Wrong choice entered";
		exit(0);
	}
}

 int main()
 {
 	float a,b,result;
 	int choice;
 	char ch;
 	calculator();
 	cout<<"Press Y to Continue ";
 	cin>>ch;
 	if(ch=='Y')
 	{
 		calculator();
	 }
	 else
	 {
	 	exit(0);
	 }
return 0;
 }
