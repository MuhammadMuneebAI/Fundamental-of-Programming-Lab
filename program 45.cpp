#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	fstream mmuneeb_file;
	mmuneeb_file.open("mmuneeb_file.txt",ios::in);
	if(!mmuneeb_file)
	{
		cout<<"No Such file";
	}
	else
	{
		char ch;
		
		while(1)
		{
			mmuneeb_file >> ch;
			if (mmuneeb_file.eof())
			break;
			
			cout<< ch;
		}
	}
	mmuneeb_file.close();
	return 0;
}
