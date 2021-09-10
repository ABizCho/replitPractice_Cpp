#include <iostream>
using namespace std;

int main() {
  int a=0;
  int b=0;
  
  cout<<"a를 입력하세요: ";
  cin>>a;

  cout<<"b를 입력하세요: ";
  cin>>b;
  cout<<endl;

  a = a + b; 
  b = a - b; 
  a = a - b; 
  
  cout<<"a: "<<a<<endl;
  cout<<"b: "<<b<<endl;

  

  return 0;
}