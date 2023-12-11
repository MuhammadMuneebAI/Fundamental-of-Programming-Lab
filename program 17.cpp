#include<iostream>
using namespace std;
int main()
{
	float salary,bonus,grade;
	cout<<"Muhammad Muneeb 22108190"<<endl;
	cout<<"Enter your grade : ";
	cin>>grade;
	cout<<"Please Enter your Salary : ";
	cin>>salary;
	if(grade>15)
	bonus =salary*50.0/100.0;
	else
	bonus =salary*25.0/100.0;
	salary=salary+bonus;
	cout<<"Your total salary is : "<<salary;
	return 0;
}
