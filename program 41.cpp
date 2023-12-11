#include<iostream>
using namespace std;
void swap(int*m1,int*m2)
{
  int temp =*m1;
  *m1 = *m2;
  *m2 = temp;
}
int main()
{
  int num1 = 10;
  int num2 = 20; 
  
  cout<<"Before Swapping: num1 = "<<num1<<"num2	="<<num2<<endl;
  
  swap(&num1,&num2);
  
  cout<<"After Swapping: num1 = "<<num1<<"num2	="<<num2<<endl;
	return 0;
}
