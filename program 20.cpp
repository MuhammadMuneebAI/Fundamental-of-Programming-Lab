#include<iostream>
using namespace std;
int main()
{
	int number,option;
	char letter;
	cout<<"Muhammad Muneeb 22108190"<<endl;
	cout<<"1. Convert ASCII Value To Character "<<endl;
    cout<<"2. Convert Character Value To ASCII "<<endl ;
    cout<<"Enter Your Choice ";
    cin>>option;
    switch(option)
    {
    	case 1:
    		cout<<"Enter a Number : ";
    		cin>>number;
    		cout<<"The coresponding character is : "<<char(number)<<endl;
    		break;
    	case 2:
    		cout<<"Enter a letter : ";
    		cin>>letter;
    		cout<<"ASCII Value of the letter is : "<<int(letter)<<endl;
    		break;
    	default:
    		cout<<"Invalid option";
    		break;
	}
return 0;
}
