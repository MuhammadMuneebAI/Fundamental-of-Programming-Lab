#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Muhammad Muneeb 22108190"<<endl;
	cout<<"Enter the Number Between 1 to 7 : ";
	cin>>num;
	
	switch(num)
	{
		case 1:
			cout<<"Monday";
			break;
		case 2:
			cout<<"Tuesday";
			break;
		case 3:
			cout<<"Wednesday";
			break;
		case 4:
			cout<<"Thursday";
			break;
		case 5:
			cout<<"Friday";
			break;
		case 6:
			cout<<"Saturday";
			break;
		case 7:
			cout<<"Sunday";
			break;
			
	default:
	    cout<<"invaild input";
	}
return 0;
}
