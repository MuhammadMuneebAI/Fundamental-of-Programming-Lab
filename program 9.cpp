#include<iostream>
#define PI 3.14159
using namespace std;
int main()
{
	cout<<"Muhammad Muneeb 22108190";
	float radius,area,circum;
	cout<<"\nEnter the value of radius ";
	cin>>radius;
	circum=2*PI*radius;
	cout<<"Circum is "<<circum;
	area=PI*(radius*radius);
	cout<<"\narea is "<<area;
	return 0;
}
