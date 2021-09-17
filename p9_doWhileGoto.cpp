#include <iostream>
using namespace std;

int main()
{
  int i = 0;
  
  do
  {
    cout<<"i == "<<i<<endl;
    i++;
  }
  while( i < 10 );
  
  cout<<"exWhile i == "<<i<<endl;
  
  goto fin;
  
  i = 0 ;
  
  fin : cout<<"Final i == "<<i<<endl;
  
  return 0;
}