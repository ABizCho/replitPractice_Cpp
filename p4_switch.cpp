#include <iostream>
using namespace std;

int main(){
  int score;
  
  cout << "점수를 입력해주세요: " ; 
  cin >> score ;
  
  switch (score / 10)
  {
    case 10 :
    case 9 :
      cout<<"A";
      break;
      
    case 8 :
      cout<<"B";
      break;
    default :
      cout<<"F";
  }
  return 0;
  
}