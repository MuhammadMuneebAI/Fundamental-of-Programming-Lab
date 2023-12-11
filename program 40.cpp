#include<iostream>
using namespace std;
int main()
{
	int x,y;
	cout<<"Enter the First Integer:";
	cin>>x;
	cout<<"Enter the Second Integer:";
	cin>>y;
	
	int* ptr1;
	int* ptr2;
	
	ptr1 = &x;
	ptr2 = &y;
	
	cout<<"Address of X:"<< ptr1 <<endl;
    cout<<"Address of y:"<< ptr2 <<endl;
    
return 0;
}
