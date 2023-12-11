#include<iostream>
using namespace std;
int main()
{
 bool result;
 
 cout<<"Muhammad Muneeb 22108190"<<endl;
 
   result =(3 != 5) && (3 < 5);
   cout<<"(3 != 5) && (3 < 5) is " <<result<<endl;
 
   result =(3 == 5) && (3 < 5);
   cout<<"(3 == 5) && (3 < 5) is " <<result<<endl;
 
   result =(3 == 5) && (3 > 5);
   cout<<"(3 == 5) && (3 > 5) is " <<result<<endl;
 
   result =(3 != 5) || (3 < 5);
   cout<<"(3 != 5) || (3 < 5) is " <<result<<endl;
 
   result =(3 != 5) || (3 > 5);
   cout<<"(3 != 5) || (3 > 5) is " <<result<<endl;
  
   result =(3 == 5) || (3 > 5);
   cout<<"(3 == 5) || (3 > 5) is " <<result<<endl;
  
   result = !(5 == 2);
 cout<<"!(5 == 2) is " <<result<<endl;
 
  result = !(5 == 5);
 cout<<"!(5 == 5) is " <<result<<endl;
 
  return 0;
}
