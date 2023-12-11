#include<iostream>
using namespace std;
int main()
{
	char oper;
	float num1,num2;
	cout<<"Muhammad Muneeb 22108190"<<endl;
	cout<<"Enter an Operator (+,-,*,/) :";
	cin>>oper;
	cout<<"Enter Two Numbers : ";
	cin>>num1>>num2;
	
	switch(oper)
	{
	case '+':
		cout<<num1<<"+"<<num2<<"="<<num1+num2;
		break;
	case '-':
		cout<<num1<<"-"<<num2<<"="<<num1-num2;
		break;
	case '*':
		cout<<num1<<"*"<<num2<<"="<<num1*num2;
		break;
	case '/':
		cout<<num1<<"/"<<num2<<"="<<num1/num2;
		break;
	default:
		cout<<"Error ! The operator is not correct";
		
	}
return 0;
}
