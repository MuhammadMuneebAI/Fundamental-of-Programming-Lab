#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	fstream muneeb_file;
	muneeb_file.open("muneeb_file",ios::out);
	if(!muneeb_file)
	{
		cout<<"File not Created!";
	}
	else
	{
		cout<<"File Created Successfully!";
	}
	return 0;
}
