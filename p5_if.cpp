#include <iostream>
using namespace std;

int main(){
  
  int i;
  
  cout << "정수를 입력하시오: ";
  cin >> i ;
  
  if ( i % 2 == 0 ){
    cout<<"짝수입니다."<<endl;
  }
  else {
    cout<<"홀수입니다."<<endl;
  }
return 0;
  
}